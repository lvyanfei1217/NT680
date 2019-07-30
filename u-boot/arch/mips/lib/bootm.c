/*
 * (C) Copyright 2003
 * Wolfgang Denk, DENX Software Engineering, wd@denx.de.
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <common.h>
#include <command.h>
#include <image.h>
#include <u-boot/zlib.h>
#include <asm/byteorder.h>
#include <asm/addrspace.h>

#ifdef CONFIG_NT96660
#include <asm/arch/nt96660_time.h>
#endif

DECLARE_GLOBAL_DATA_PTR;

#define	LINUX_MAX_ENVS		256
#define	LINUX_MAX_ARGS		256

#if defined(CONFIG_MALTA)
#define mips_boot_malta		1
#else
#define mips_boot_malta		0
#endif

#ifdef CONFIG_NT96660
extern char CONFIG_SYS_TEXT_BASE[];
#define CONFIG_SYS_MONITOR_BASE ((ulong)CONFIG_SYS_TEXT_BASE)
#endif

static int linux_argc;
static char **linux_argv;
static char *linux_argp;

static char **linux_env;
static char *linux_env_p;
static int linux_env_idx;

static ulong arch_get_sp(void)
{
	ulong ret;

	__asm__ __volatile__("move %0, $sp" : "=r"(ret) : );

	return ret;
}

void arch_lmb_reserve(struct lmb *lmb)
{
	ulong sp;

	sp = arch_get_sp();
	debug("## Current stack ends at 0x%08lx\n", sp);

	/* adjust sp by 4K to be safe */
	sp -= 4096;
#ifdef CONFIG_NT96660	
	lmb_reserve(lmb, sp, CONFIG_SYS_MONITOR_BASE + gd->ram_size - sp);
#else
	lmb_reserve(lmb, sp, CONFIG_SYS_SDRAM_BASE + gd->ram_size - sp);
#endif	
}

static void linux_cmdline_init(void)
{
	linux_argc = 1;
	linux_argv = (char **)UNCACHED_SDRAM(gd->bd->bi_boot_params);
	linux_argv[0] = 0;
	linux_argp = (char *)(linux_argv + LINUX_MAX_ARGS);
}

static void linux_cmdline_set(const char *value, size_t len)
{
	linux_argv[linux_argc] = linux_argp;
	memcpy(linux_argp, value, len);
	linux_argp[len] = 0;

	linux_argp += len + 1;
	linux_argc++;
}

static void linux_cmdline_dump(void)
{
	int i;

	debug("## cmdline argv at 0x%p, argp at 0x%p\n",
	      linux_argv, linux_argp);

	for (i = 1; i < linux_argc; i++)
		debug("   arg %03d: %s\n", i, linux_argv[i]);
}

static void boot_cmdline_linux(bootm_headers_t *images)
{
	char *bootargs, *next, *quote;
	char buf[20] ={0};

	linux_cmdline_init();

	bootargs = getenv("bootargs");
	if (!bootargs)
		return;

	/* boot time recording */
	sprintf(buf,"bootts=%u,%u ", getTM0InitTime(), getTM0Time());
	strcat(bootargs,buf);

	next = bootargs;

	while (bootargs && *bootargs && linux_argc < LINUX_MAX_ARGS) {
		quote = strchr(bootargs, '"');
		next = strchr(bootargs, ' ');

		while (next && quote && quote < next) {
			/*
			 * we found a left quote before the next blank
			 * now we have to find the matching right quote
			 */
			next = strchr(quote + 1, '"');
			if (next) {
				quote = strchr(next + 1, '"');
				next = strchr(next + 1, ' ');
			}
		}

		if (!next)
			next = bootargs + strlen(bootargs);

		linux_cmdline_set(bootargs, next - bootargs);

		if (*next)
			next++;

		bootargs = next;
	}

	linux_cmdline_dump();
}

static void linux_env_init(void)
{
	linux_env = (char **)(((ulong) linux_argp + 15) & ~15);
	linux_env[0] = 0;
	linux_env_p = (char *)(linux_env + LINUX_MAX_ENVS);
	linux_env_idx = 0;
}

static void linux_env_set(const char *env_name, const char *env_val)
{
	if (linux_env_idx < LINUX_MAX_ENVS - 1) {
		linux_env[linux_env_idx] = linux_env_p;

		strcpy(linux_env_p, env_name);
		linux_env_p += strlen(env_name);

		if (mips_boot_malta) {
			linux_env_p++;
			linux_env[++linux_env_idx] = linux_env_p;
		} else {
			*linux_env_p++ = '=';
		}

		strcpy(linux_env_p, env_val);
		linux_env_p += strlen(env_val);

		linux_env_p++;
		linux_env[++linux_env_idx] = 0;
	}
}

static void boot_prep_linux(bootm_headers_t *images)
{
	char env_buf[12];
	const char *cp;
	ulong rd_start, rd_size;

#ifdef CONFIG_MEMSIZE_IN_BYTES
	sprintf(env_buf, "%lu", (ulong)gd->ram_size);
	debug("## Giving linux memsize in bytes, %lu\n", (ulong)gd->ram_size);
#else
	sprintf(env_buf, "%lu", (ulong)(gd->ram_size >> 20));
	debug("## Giving linux memsize in MB, %lu\n",
	      (ulong)(gd->ram_size >> 20));
#endif /* CONFIG_MEMSIZE_IN_BYTES */

	rd_start = UNCACHED_SDRAM(images->initrd_start);
	rd_size = images->initrd_end - images->initrd_start;

	linux_env_init();

	linux_env_set("memsize", env_buf);

	sprintf(env_buf, "0x%08lX", rd_start);
	linux_env_set("initrd_start", env_buf);

	sprintf(env_buf, "0x%lX", rd_size);
	linux_env_set("initrd_size", env_buf);

	sprintf(env_buf, "0x%08X", (uint) (gd->bd->bi_flashstart));
	linux_env_set("flash_start", env_buf);

	sprintf(env_buf, "0x%X", (uint) (gd->bd->bi_flashsize));
	linux_env_set("flash_size", env_buf);

	cp = getenv("ethaddr");
	if (cp)
		linux_env_set("ethaddr", cp);

	cp = getenv("eth1addr");
	if (cp)
		linux_env_set("eth1addr", cp);

	if (mips_boot_malta) {
		sprintf(env_buf, "%un8r", gd->baudrate);
		linux_env_set("modetty0", env_buf);
	}
}

static void boot_jump_linux(bootm_headers_t *images)
{
	typedef void __noreturn (*kernel_entry_t)(int, ulong, ulong, ulong);
	kernel_entry_t kernel = (kernel_entry_t) images->ep;
	ulong linux_extra = 0;

	debug("## Transferring control to Linux (at address %p) ...\n", kernel);

	bootstage_mark(BOOTSTAGE_ID_RUN_OS);

	if (mips_boot_malta)
		linux_extra = gd->ram_size;

	/* we assume that the kernel is in place */
	/*printf ("\nUBoot booting time %u us ...\n", (unsigned int)(getTM0Time() - getTM0InitTime()));
	printf("\nBoot time:\n");
	printf("UBoot %u\n", getTM0InitTime());
	printf("UBoot %u\n", getTM0Time());*/
	printf("\nStarting kernel ...\n\n");

	kernel(linux_argc, (ulong)linux_argv, (ulong)linux_env, linux_extra);
}

int do_bootm_linux(int flag, int argc, char * const argv[],
			bootm_headers_t *images)
{
	/* No need for those on MIPS */
	if (flag & BOOTM_STATE_OS_BD_T)
		return -1;

	if (flag & BOOTM_STATE_OS_CMDLINE) {
		boot_cmdline_linux(images);
		return 0;
	}

	if (flag & BOOTM_STATE_OS_PREP) {
		boot_prep_linux(images);
		return 0;
	}

	if (flag & BOOTM_STATE_OS_GO) {
		boot_jump_linux(images);
		return 0;
	}

	boot_cmdline_linux(images);
	boot_prep_linux(images);
	boot_jump_linux(images);

	/* does not return */
	return 1;
}