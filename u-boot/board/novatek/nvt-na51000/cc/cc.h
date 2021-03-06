/**

    Header file for CC (Core Communicator) module.

    This file is the header file that define the API and data type
    for CC module.

    @file       cc.h
    Copyright   Novatek Microelectronics Corp. 2016.  All rights reserved.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.
*/

#ifndef _CC_H
#define _CC_H

#if 0
typedef enum
{
	CC_CORE_CA53_CORE1 = 0x0,		///< 1st Core MIPS1
	CC_CORE_CA53_CORE2,			///< 2nd Core MIPS2

	CC_CORE_CA53_CORE_NUM,
	CC_CORE_DSP = 0x2,			///< 1st Core DSP XM4_1
	CC_CORE_DSP2,				///< 1st Core DSP XM4_2

	CC_CORE_DSP_NUM = 0x2,
}CC_CORE_ID;
#endif
typedef unsigned long		CC_U32;		///< Unsigned 32 bits data type
typedef   signed long		CC_I32;		///< Unsigned 32 bits data type

typedef enum
{
	CC_EVT_FROM_CPU1 = 0x0,
	CC_EVT_FROM_CPU2,
	CC_EVT_FROM_DSP,

	CC_ACK_FROM_CPU1,
	CC_ACK_FROM_CPU2,
	CC_ACK_FROM_DSP,
}CC_EVENT;

/**
    @addtogroup mIDrvSys_CC
*/
//@{

// Core Communicator handler
typedef void (*CC_HANDLER)(CC_U32 uiEvent);

typedef struct
{
	CC_U32		uiCMDID;		///< Command ID, a serial number from 1 to 0xFFFF
						///< @note      For cc_getCoreXCMD() only, generated by CC driver.
	CC_U32		uiCMDOperation;		///< Command operation, from 0 to 0xFFFF
	CC_U32		*pData;			///< Command data
						///< @note      Not the address of data that will be processed by this command
	CC_U32		uiDataSize;		///< Command data size in bytes
						///< @note      Not the size of data that will be processed by this command
} CC_CMD, *PCC_CMD;

extern CC_ER	cc_open(void);

extern CC_ER	cc_close(void);

extern void	cc_suspend(void);

extern void 	cc_resume(void);

extern void 	cc_registerCore1Handler(CC_HANDLER Hdl);

extern void 	cc_registerCore3Handler(CC_HANDLER Hdl);

extern CC_ER	cc_sendCore1CMD(PCC_CMD pCMD);

extern CC_ER	cc_sendCore3CMD(PCC_CMD pCMD);

extern void	    cc_getCore1CMD(PCC_CMD pCMD);

extern void	    cc_getCore3CMD(PCC_CMD pCMD);

extern void	    cc_ackCore1CMD(void);

extern void	    cc_ackCore3CMD(void);

extern CC_I32	cc_getHwResGrant(CC_CORE_ID uiCoreID);

extern CC_ER    cc_hwLockResource(CC_CORE_ID uiCoreID, CC_RES_ID uiResID);

extern CC_ER    cc_hwUnlockResource(CC_CORE_ID uiCoreID, CC_RES_ID uiResID);



//@}

#endif
