/*
    Public header file for RDE module.

    This file is the header file that define the API and data type for SIE
    module.

    @file       sie2_lib.h
    @ingroup    mIDrvIPPSIE
    @note

    Copyright   Novatek Microelectronics Corp. 2011.  All rights reserved.
*/

#ifndef _SIE2_LIB_H
#define _SIE2_LIB_H

#include "sie_lib.h"

extern UINT32 g_uiSie2Out0Cnt;
extern UINT32 g_uiSie2BccOvflCnt;
extern UINT32 g_uiSie2VdCnt;
extern UINT32 g_uiSie2ActStCnt;
extern UINT32 g_uiSie2Out5Cnt;

/**
    SIE Entire Configuration.

    Structure of entire SIE configuration.
*/
//@{
typedef struct {
	// No run-time change
	SIE_MAIN_INPUT_INFO         MainInInfo;
	SIE_DVI_INFO                DviInfo;
	SIE_PATGEN_INFO             PatGenInfo;

	// run-time change-able
	UINT32  uiFuncEn;
	UINT32  uiIntrpEn;
	SIE_BREAKPOINT_INFO BreakPointInfo;
	SIE_SRC_WIN_INFO    SrcWinInfo;
	SIE_ACT_WIN_INFO    ActWinInfo;
	SIE_CRP_WIN_INFO    CrpWinInfo;

//NA//    SIE_DRAM_IN0_INFO   DramIn0Info;
	SIE_DRAM_IN1_INFO   DramIn1Info;
	SIE_DRAM_IN2_INFO   DramIn2Info;
	SIE_DRAM_OUT0_INFO  DramOut0Info;
	SIE_DRAM_OUT1_INFO  DramOut1Info;
	SIE_DRAM_OUT2_INFO  DramOut2Info;
	SIE_DRAM_OUT3_INFO  DramOut3Info;
//NA//    SIE_DRAM_OUT4_INFO  DramOut4Info;
	SIE_DRAM_OUT5_INFO  DramOut5Info;

	SIE_DRAM_BURST_INFO DramBurstInfo;// would be removed soon

	SIE_OB_DT_INFO          ObDtInfo;
	SIE_OB_DT_RSLT_INFO     ObDtRsltInfo;// would be removed soon
	SIE_OB_OFS_INFO         ObOfsInfo;
//NA//    SIE_OB_FRAME_INFO       ObFrmInfo;
//NA//    SIE_OB_PLANE_INFO       ObPlnInfo;

	SIE_DPC_INFO        DefectInfo;
	SIE_MAIN_GAMMA_INFO MainGmaInfo;
	SIE_ECS_INFO        EcsInfo;
	SIE_DGAIN_INFO      DgainInfo;

	SIE_BS_H_INFO       BshInfo;
	SIE_BS_V_INFO       BsvInfo;
	SIE_CG_INFO         CGainInfo;
	SIE_GRIDLINE_INFO   GridLineInfo;
	SIE_YOUT_INFO       YoutInfo;

	SIE_IR_INFO         IrInfo;
	SIE_RCCB_INFO       RccbInfo;
	SIE_BCC_PARAM_INFO  BccParamInfo;
	//there would be default inside driver//SIE_BCC_TBL_INFO    BccTblInfo;

	SIE_STCS_PATH_INFO  StcsPathInfo;
	SIE_STCS_CALASIZE_GRP_INFO  StcsCaLaSzGrpInfo;
	SIE_VIG_INFO        StcsVigInfo;
	//SIE_STCS_CALASIZE_GRP_INFO//SIE_CA_CROP_INFO    StcsCaCrpInfo;
	//SIE_STCS_CALASIZE_GRP_INFO//SIE_CA_SCAL_INFO    StcsCaSmplInfo;
	SIE_CA_TH_INFO      StcsCaThInfo;
	//SIE_STCS_CALASIZE_GRP_INFO//SIE_CA_WIN_INFO     StcsCaWinInfo;
	//SIE_STCS_CALASIZE_GRP_INFO//SIE_LA_CROP_INFO    StcsLaCrpInfo;
	SIE_LA_CG_INFO      StcsLaCgInfo;
	SIE_LA_GMA_INFO     StcsLaGma1Info;
	//SIE_STCS_CALASIZE_GRP_INFO//SIE_LA_WIN_INFO     StcsLaWinInfo;
//NA//    SIE_VA_CG_INFO      StcsVaCgInfo;
//NA//    SIE_VA_CROP_INFO    StcsVaCrpInfo;
//NA//    SIE_VA_GMA_INFO     StcsVaGma2Info;
//NA//    SIE_VA_FLTR_GROUP_INFO    StcsVaFltrG1;
//NA//    SIE_VA_FLTR_GROUP_INFO    StcsVaFltrG2;
//NA//    SIE_VA_WIN_INFO     StcsVaWinInfo;
//NA//    SIE_VA_INDEP_WIN_INFO StcsVaIndepWinInfo[5];
//NA//    SIE_ETH_INFO          StcsEthInfo;

//NA//    SIE_PFPC_INFO       PfpcInfo;
} SIE2_MODE_PARAM;
//@}


//@}

/**
SIE API

@name   SIE_API
*/
//@{

// sie2_lib.c
extern void sie2_isr(void);
extern ER sie2_open(SIE_OPENOBJ *pObjCB);
extern BOOL sie2_isOpened(void);
extern ER sie2_close(void);
extern ER sie2_pause(void);
extern ER sie2_start(void);
extern ER sie2_setMode(SIE2_MODE_PARAM *pSieParam);
extern ER sie2_chgParam(void *pParam, SIE_CHANGE_FUN_PARAM_SEL FunSel);
extern ER sie2_chgFuncEn(SIE_FUNC_SWITCH_SEL FuncSwitch, UINT32 uiFuncSel);
extern ER sie2_waitEvent(SIE_WAIT_EVENT_SEL WaitEvent, BOOL bClrFlag);
extern ER sie2_abortEvent(SIE_WAIT_EVENT_SEL WaitEvent);
extern void sie2_getBccRslt_LastFrame(SIE_BCC_RSLT_INFO *pBccRslt);
extern UINT32 sie2_getClockRate(void);
extern void sie2_getLAGamma(UINT32 *puiGammaLut);
// sie2_int.c
extern void sie2_getMainInput(SIE_MAIN_INPUT_INFO *pMainInInfo);
//NA//extern void sie2_setDramInStart(void);
//NA//extern void sie2_calcObPlnScl(SIE_OB_PLANE_INFO *pObpParam, SIE_OB_PLANE_ADJ_INFO *pObpAdjParam);
extern UINT32 sie2_getIntrStatus(void);
extern UINT32 sie2_getFunction(void);
extern void sie2_getEngineStatus(SIE_ENGINE_STATUS_INFO *pEngineStatus);
extern void sie2_getActiveWindow(SIE_ACT_WIN_INFO *pActWin);
extern void sie2_getCropWindow(SIE_CRP_WIN_INFO *pCrpWin);
extern void sie2_getDVI(SIE_DVI_INFO *pDviParam);
extern void sie2_getObOfs(SIE_OB_OFS_INFO *pObDtOfs);
extern void sie2_calcBSHScl(SIE_BS_H_INFO *pBshParam, SIE_BS_H_ADJ_INFO *pBshAdjParam);
extern void sie2_calcBSVScl(SIE_BS_V_INFO *pBsvParam, SIE_BS_V_ADJ_INFO *pBsvAdjParam);
extern void sie2_calcVIG(SIE_VIG_INFO *pVigParam, SIE_VIG_ADJ_INFO *pVigAdjParam);
extern void sie2_calcVIG_TwoImg(SIE_VIG_INFO *pVigParam, SIE_VIG_ADJ_2IMG_INFO *pVigAdjTwoImgParam);
extern void sie2_calcECSScl(SIE_ECS_INFO *pEcsParam, SIE_ECS_ADJ_INFO *pEcsAdjParam);
extern void sie2_calcCaLaSize(SIE_STCS_CALASIZE_GRP_INFO *pVaSzGrpInfo, SIE_STCS_CALASIZE_ADJ_INFO *pVaAdjInfo);
extern void sie2_calcYoutInfo(SIE_YOUT_GRP_INFO *pSzGrpInfo, SIE_YOUT_ADJ_INFO *pSzAdjInfo);
extern UINT32 sie2_getOutAdd(UINT32 uiOutChIdx, SIE_PINGPONG_BUFF_SEL uiBufSel);
extern UINT32 sie2_getOutAdd_Flip(UINT32 uiOutChIdx, SIE_PINGPONG_BUFF_SEL uiBufSel);
extern void sie2_getCAResult(SIE_STCS_CA_RSLT_INFO *CaRsltInfo);
//NA//extern void sie2_getCAFlipResult(UINT16 *puiBufR, UINT16 *puiBufG, UINT16 *puiBufB, UINT16 *puiAccCnt, SIE_FLIP_SEL pFlipSel);
extern void sie2_getCAResultManual(SIE_STCS_CA_RSLT_INFO *CaRsltInfo, SIE_CA_WIN_INFO *CaWinInfo, UINT32 uiBuffAddr);
//NA//extern void sie2_getCAFlipResultManual(UINT16 *puiBufR, UINT16 *puiBufG, UINT16 *puiBufB, UINT16 *puiAccCnt, SIE_CA_WIN_INFO *CaWinInfo, UINT32 uiBuffAddr, SIE_FLIP_SEL pFlipSel);
extern void sie2_getLaWin(SIE_LA_WIN_INFO *pSetting);
extern UINT32 sie2_getLaWinSum(void);
extern void sie2_getHisto(UINT16 *puiHisto);
extern void sie2_getLAResult(UINT16 *puiBufLa1, UINT16 *puiBufLa2);
//NA//extern void sie2_getLAFlipResult(UINT16 *puiBufLa1, UINT16 *puiBufLa2, SIE_FLIP_SEL pFlipSel);
extern void sie2_getLAResultManual(UINT16 *puiBufLa1, UINT16 *puiBufLa2, SIE_LA_WIN_INFO *LaWinInfo, UINT32 uiBuffAddr);
//NA//extern void sie2_getLAFlipResultManual(UINT16 *puiBufLa1, UINT16 *puiBufLa2, SIE_LA_WIN_INFO *LaWinInfo, UINT32 uiBuffAddr, SIE_FLIP_SEL pFlipSel);
//NA//extern void sie2_getVAResult(UINT32 *puiG1H, UINT32 *puiG1V, UINT32 *puiG2H, UINT32 *puiG2V);
//NA//extern void sie2_getVAFlipResult(UINT32 *puiG1H, UINT32 *puiG1V, UINT32 *puiG2H, UINT32 *puiG2V, SIE_FLIP_SEL pFlipSel);
//NA//extern void sie2_getVAResultManual(UINT32 *puiG1H, UINT32 *puiG1V, UINT32 *puiG2H, UINT32 *puiG2V, SIE_VA_WIN_INFO *VaWinInfo, UINT32 uiBuffAddr);
//NA//extern void sie2_getVAFlipResultManual(UINT32 *puiG1H, UINT32 *puiG1V, UINT32 *puiG2H, UINT32 *puiG2V, SIE_VA_WIN_INFO *VaWinInfo, UINT32 uiBuffAddr, SIE_FLIP_SEL pFlipSel);
extern void sie2_getBccRslt(SIE_BCC_RSLT_INFO *pBccRslt);
extern void sie2_getVaIndepWinRslt(SIE_VA_INDEP_WIN_RSLT_INFO *pSetting, UINT32 uiIdx);
extern void sie2_getBurstLength(SIE_BURST_LENGTH *pBurstLen);


extern ER   sie2_SIE2_CLK_openClock(void);
extern ER   sie2_SIE2_CLK_closeClock(void);
extern BOOL sie2_SIE2_CLK_isClockOpened(void);
extern ER   sie2_SIE2_CLK_chgClockSource(SIE_CLKSRC_SEL ClkSrc);
extern ER   sie2_SIE2_CLK_chgClockRate(UINT32 uiClkRate);
ER sie2_chgBurstLengthByMode(SIE_DRAM_BURST_MODE_SEL BurstMdSel);
UINT32 sie2_getBccsideSz(UINT32 uiWidth, UINT32 uiHeight);

#endif//_SIE2_LIB_H
//@}

//@}


