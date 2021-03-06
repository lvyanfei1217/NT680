#include "modelext_info.h"
#include "top.h"
#include "IOCfg.h"

PIN_GROUP_CONFIG ind_pinmux_cfg_data[] __attribute__((section("modelext_data.pinmux_cfg"))) = {
	// Module name              pinmux config

	//
	// Storage configuration
	//
	{PIN_FUNC_SDIO,             PIN_SDIO_CFG_4BITS},
	{PIN_FUNC_SDIO2,            PIN_SDIO_CFG_4BITS},

#if defined(_EMBMEM_NAND_)
	{PIN_FUNC_SDIO3,            PIN_SDIO_CFG_NONE},//_TODO: is still common pin?
	{PIN_FUNC_NAND,             PIN_NAND_CFG_1CS},
#elif defined(_EMBMEM_SPI_NAND_)
	{PIN_FUNC_SDIO3,            PIN_SDIO_CFG_NONE},//_TODO: is still common pin?
	{PIN_FUNC_NAND,             PIN_NAND_CFG_1CS | PIN_NAND_CFG_SPI_NAND},
#elif defined(_EMBMEM_SPI_NOR_)
	{PIN_FUNC_SDIO3,            PIN_SDIO_CFG_NONE},//_TODO: is still common pin?
	{PIN_FUNC_NAND,             PIN_NAND_CFG_1CS | PIN_NAND_CFG_SPI_NOR},
#elif defined(_EMBMEM_EMMC_)
	{PIN_FUNC_SDIO3,            PIN_SDIO_CFG_4BITS | PIN_SDIO_CFG_2ND_PINMUX},
	{PIN_FUNC_NAND,             PIN_NAND_CFG_NONE},
#else
	{PIN_FUNC_SDIO3,            PIN_SDIO_CFG_NONE},
	{PIN_FUNC_NAND,             PIN_NAND_CFG_NONE},
#endif

	//
	// Sensor configuration
	//
#if (defined(_SENSOR1_CMOS_IMX123LQT_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
     defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT3 | PIN_MIPI_LVDS_CFG_DAT4 |
		PIN_MIPI_LVDS_CFG_DAT5 | PIN_MIPI_LVDS_CFG_DAT6 |
		PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_IMX277CQT_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK | PIN_SENSOR_CFG_LVDS_VDHD},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK0 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT3 | PIN_MIPI_LVDS_CFG_DAT4 |
		PIN_MIPI_LVDS_CFG_DAT5 | PIN_MIPI_LVDS_CFG_DAT6 |
		PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_MN34220_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
     defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT3 | PIN_MIPI_LVDS_CFG_DAT4 |
		PIN_MIPI_LVDS_CFG_DAT5 | PIN_MIPI_LVDS_CFG_DAT6 |
		PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_OFF_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_IMX322LQJVX1_) && defined(_SENSOR4_CMOS_OFF_) && \
     defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_NONE},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_MCLK2},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_NONE
	},
#elif (defined(_SENSOR1_CMOS_IMX322LQJ_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_12BITS | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_NONE
	},
#elif (defined(_SENSOR1_CMOS_AR0237_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
     defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT3 | PIN_MIPI_LVDS_CFG_DAT4 |
		PIN_MIPI_LVDS_CFG_DAT5 | PIN_MIPI_LVDS_CFG_DAT6 |
		PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_IMX317M_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT3
	},
#elif (defined(_SENSOR1_CMOS_IMX117CQT_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK|PIN_SENSOR_CFG_LVDS_VDHD},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK0| PIN_MIPI_LVDS_CFG_DAT0 |
        PIN_MIPI_LVDS_CFG_DAT1 | PIN_MIPI_LVDS_CFG_DAT2 |
        PIN_MIPI_LVDS_CFG_DAT3 | PIN_MIPI_LVDS_CFG_DAT4 |
        PIN_MIPI_LVDS_CFG_DAT5 | PIN_MIPI_LVDS_CFG_DAT6 |
        PIN_MIPI_LVDS_CFG_DAT7 | PIN_MIPI_LVDS_CFG_DAT8 |
        PIN_MIPI_LVDS_CFG_DAT9
	},
#elif (defined(_SENSOR1_CMOS_IMX291LQR_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1
	},
#elif (defined(_SENSOR1_CMOS_IMX290LQR_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK2 | PIN_MIPI_LVDS_CFG_DAT0 |
		PIN_MIPI_LVDS_CFG_DAT1
	},
#elif (defined(_SENSOR1_CMOS_IMX291LQR_) && defined(_SENSOR2_CMOS_IMX291LQR_) && defined(_SENSOR3_CMOS_IMX291LQR_) && defined(_SENSOR4_CMOS_IMX291LQR_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_MIPI},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_MIPI},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_MIPI},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK0 | PIN_MIPI_LVDS_CFG_CLK2 |
		PIN_MIPI_LVDS_CFG_CLK4 | PIN_MIPI_LVDS_CFG_CLK6 |
		PIN_MIPI_LVDS_CFG_DAT0 | PIN_MIPI_LVDS_CFG_DAT1 |
		PIN_MIPI_LVDS_CFG_DAT2 | PIN_MIPI_LVDS_CFG_DAT3 |
		PIN_MIPI_LVDS_CFG_DAT4 | PIN_MIPI_LVDS_CFG_DAT5 |
		PIN_MIPI_LVDS_CFG_DAT6 | PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_IMX291LVDS_) && defined(_SENSOR2_CMOS_IMX291LVDS_) && defined(_SENSOR3_CMOS_IMX291LVDS_) && defined(_SENSOR4_CMOS_IMX291LVDS_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_LVDS | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_LVDS},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_LVDS},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_LVDS},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK0 | PIN_MIPI_LVDS_CFG_CLK2 |
		PIN_MIPI_LVDS_CFG_CLK4 | PIN_MIPI_LVDS_CFG_CLK6 |
		PIN_MIPI_LVDS_CFG_DAT0 | PIN_MIPI_LVDS_CFG_DAT1 |
		PIN_MIPI_LVDS_CFG_DAT2 | PIN_MIPI_LVDS_CFG_DAT3 |
		PIN_MIPI_LVDS_CFG_DAT4 | PIN_MIPI_LVDS_CFG_DAT5 |
		PIN_MIPI_LVDS_CFG_DAT6 | PIN_MIPI_LVDS_CFG_DAT7
	},
#elif (defined(_SENSOR1_CMOS_OFF_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_NVP6124B_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_NONE},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_8BITS},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,        PIN_MIPI_LVDS_CFG_NONE
	},
#elif (defined(_SENSOR1_CMOS_OV7251M_) && defined(_SENSOR2_CMOS_OV7251M_) && defined(_SENSOR3_CMOS_OV7251M_) && defined(_SENSOR4_CMOS_OV7251M_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_MIPI},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_MIPI},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_MIPI},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,
		PIN_MIPI_LVDS_CFG_CLK0 | PIN_MIPI_LVDS_CFG_CLK2 |
		PIN_MIPI_LVDS_CFG_CLK4 | PIN_MIPI_LVDS_CFG_CLK6 |
		PIN_MIPI_LVDS_CFG_DAT0 | PIN_MIPI_LVDS_CFG_DAT2 |
		PIN_MIPI_LVDS_CFG_DAT4 | PIN_MIPI_LVDS_CFG_DAT6
	},
#elif (defined(_SENSOR1_CMOS_SIEPATGEN_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
       defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_NONE},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR3_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR4_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR6_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR7_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR8_CFG_NONE},
	{
		PIN_FUNC_MIPI_LVDS,        PIN_MIPI_LVDS_CFG_NONE
	},
#elif (defined(_SENSOR1_CMOS_IMX377M_) && defined(_SENSOR2_CMOS_OFF_) && defined(_SENSOR3_CMOS_OFF_) && defined(_SENSOR4_CMOS_OFF_) && \
		   defined(_SENSOR5_CMOS_OFF_) && defined(_SENSOR6_CMOS_OFF_) && defined(_SENSOR7_CMOS_OFF_) && defined(_SENSOR8_CMOS_OFF_))
		{PIN_FUNC_SENSOR,			PIN_SENSOR_CFG_MIPI | PIN_SENSOR_CFG_MCLK},
		{PIN_FUNC_SENSOR2,			PIN_SENSOR2_CFG_NONE},
		{PIN_FUNC_SENSOR3,			PIN_SENSOR3_CFG_NONE},
		{PIN_FUNC_SENSOR4,			PIN_SENSOR4_CFG_NONE},
		{PIN_FUNC_SENSOR5,			PIN_SENSOR5_CFG_NONE},
		{PIN_FUNC_SENSOR6,			PIN_SENSOR6_CFG_NONE},
		{PIN_FUNC_SENSOR7,			PIN_SENSOR7_CFG_NONE},
		{PIN_FUNC_SENSOR8,			PIN_SENSOR8_CFG_NONE},
		{
	        PIN_FUNC_MIPI_LVDS,
	        PIN_MIPI_LVDS_CFG_CLK2 |
	        PIN_MIPI_LVDS_CFG_DAT0 | PIN_MIPI_LVDS_CFG_DAT1 |
	        PIN_MIPI_LVDS_CFG_DAT2 | PIN_MIPI_LVDS_CFG_DAT3

		},


#else //ipl tmp, special case for FPGA, Sensor 2 need use MCLK replace MCLK2
	{PIN_FUNC_SENSOR,           PIN_SENSOR_CFG_NONE},
	{PIN_FUNC_SENSOR2,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR3,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR4,          PIN_SENSOR2_CFG_NONE},
	{PIN_FUNC_SENSOR5,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR6,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR7,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_SENSOR8,          PIN_SENSOR5_CFG_NONE},
	{PIN_FUNC_MIPI_LVDS,        PIN_MIPI_LVDS_CFG_NONE},
#endif

	//
	// Serial interface configuration
	//
	/*
	NOTE:
	PIN_I2C_CFG_CH1             (independent for MOTOR)
	PIN_I2C_CFG_CH1_2ND_PINMUX  (share to /SIF0 /SPI3)
	PIN_I2C_CFG_CH2             (independent for HDMI)
	PIN_I2C_CFG_CH2_2ND_PINMUX  (share to /Parallel_Sensor_VDHD)
	*/
	{
		PIN_FUNC_I2C,              PIN_I2C_CFG_NONE |
#if (1) //for PowerIC
		PIN_I2C_CFG_CH1 |
#endif

#if (defined(_SENSOR1_CMOS_IMX123LQT_) || defined(_SENSOR3_CMOS_IMX322LQJVX1_) || defined(_SENSOR1_CMOS_IMX322LQJ_) || defined(_SENSOR1_CMOS_AR0237_))
		PIN_I2C_CFG_CH2 |
#endif
#if defined(_SENSOR1_CMOS_IMX291LQR_)
		PIN_I2C_CFG_CH2 |
#endif
#if defined(_SENSOR1_CMOS_IMX290LQR_)
		PIN_I2C_CFG_CH2 |
#endif
#if (defined(_SENSOR1_CMOS_IMX317M_))
		PIN_I2C_CFG_CH2 |
#endif
#if (defined(_SENSOR1_CMOS_IMX291LQR_) && defined(_SENSOR2_CMOS_IMX291LQR_) && defined(_SENSOR3_CMOS_IMX291LQR_) && defined(_SENSOR4_CMOS_IMX291LQR_))
		PIN_I2C_CFG_CH1 | PIN_I2C_CFG_CH2 | PIN_I2C_CFG_CH3_3RD_PINMUX | PIN_I2C_CFG_CH4_2ND_PINMUX |
#endif

#if (defined(_SENSOR1_CMOS_OV7251M_) && defined(_SENSOR2_CMOS_OV7251M_) && defined(_SENSOR3_CMOS_OV7251M_) && defined(_SENSOR4_CMOS_OV7251M_))
		PIN_I2C_CFG_CH2 | PIN_I2C_CFG_CH3 |
#endif


#if (defined(_SENSOR1_CMOS_IMX291LVDS_) && defined(_SENSOR2_CMOS_IMX291LVDS_) && defined(_SENSOR3_CMOS_IMX291LVDS_) && defined(_SENSOR4_CMOS_IMX291LVDS_))
		PIN_I2C_CFG_CH1 | PIN_I2C_CFG_CH2 | PIN_I2C_CFG_CH3_3RD_PINMUX | PIN_I2C_CFG_CH4_2ND_PINMUX |
#endif
#if defined(_SENSOR6_CMOS_NVP6124B_)
		PIN_I2C_CFG_CH1 | PIN_I2C_CFG_CH2 | PIN_I2C_CFG_CH3_3RD_PINMUX | PIN_I2C_CFG_CH4_2ND_PINMUX |
#endif

#if (defined(_SENSOR1_CMOS_IMX377M_))
		PIN_I2C_CFG_CH2 |
#endif


#if defined(_HDMI_ON_)
		PIN_I2C_CFG_CH5 |
#endif
		0
	},

	{
		PIN_FUNC_SIF,              PIN_SIF_CFG_NONE |
#if (defined(_Disp_IF8B_LCD1_PW35P00_HX8238D_) && (LCD_COMM_CTRL == LCD_COMM_BY_SIF))
		PIN_SIF_CFG_CH1 |
#endif
#if (defined(_SENSOR1_CMOS_IMX277CQT_) || defined(_SENSOR1_CMOS_MN34220_)||defined(_SENSOR1_CMOS_IMX117CQT_))
		PIN_SIF_CFG_CH7 |
#endif
		0
	},
	{PIN_FUNC_UART,             PIN_UART_CFG_CH1 | PIN_UART_CFG_CH2},
	{
		PIN_FUNC_SPI,              PIN_SPI_CFG_NONE |
#if !defined(_Gyro_None_)
		PIN_SPI_CFG_CH3 | PIN_SPI_CFG_CH3_2BITS |
#endif

		0
	},
	{PIN_FUNC_REMOTE,           PIN_REMOTE_CFG_NONE},

	{
		PIN_FUNC_PWM,              PIN_PWM_CFG_NONE |
		0
	},

	//
	// AUDIO configuration
	//
#if defined(_AudCodecExt_WM8978_)
	{PIN_FUNC_AUDIO,            PIN_AUDIO_CFG_I2S | PIN_AUDIO_CFG_MCLK},
#else
	{PIN_FUNC_AUDIO,            PIN_AUDIO_CFG_NONE},
#endif
	//
	// Display configuration
	//
	{
		PIN_FUNC_LCD,              PINMUX_DISPMUX_SEL_NONE |
#if !defined(_Disp_VIRTUAL_LCD1_OFF_)
		PINMUX_DISPMUX_SEL_LCD |
#endif
		0
	},
	{
		PIN_FUNC_LCD2,             PINMUX_DISPMUX_SEL_NONE |
#if !defined(_Disp_VIRTUAL_LCD2_OFF_)
		PINMUX_DISPMUX_SEL_LCD2 |
#endif
		0
	},
	{PIN_FUNC_TV,               PINMUX_TV_HDMI_CFG_NORMAL},
	{
		PIN_FUNC_HDMI,             PINMUX_TV_HDMI_CFG_NORMAL |
#if defined(_HDMI_ON_)
		PINMUX_HDMIMODE_720X480P60 |
#endif
		0
	},

#if defined(_NVT_ETHERNET_EQOS_)
	{PIN_FUNC_ETH,              PIN_ETH_CFG_RGMII},
#else
	{PIN_FUNC_ETH,              PIN_ETH_CFG_NONE},
#endif
};


MODELEXT_HEADER ind_pinmux_cfg_header __attribute__((section("modelext_header.pinmux_cfg"))) = {
	.size = sizeof(ind_pinmux_cfg_data) + sizeof(MODELEXT_HEADER),
	.type = MODELEXT_TYPE_PINMUX_CFG,
	.number = sizeof(ind_pinmux_cfg_data) / sizeof(PIN_GROUP_CONFIG),
	.version = PIN_GROUP_CONFIG_VER,
};
