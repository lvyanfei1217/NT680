//This source code is generated by UI Designer Studio.

#ifndef CALIBRATIONWNDRES_H
#define CALIBRATIONWNDRES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_ITEM_RECT(CMD_Rectangle,Skin1Rect,0,0,319,239,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_BODY(Skin1Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin1,0,0,319,239)

SHOW_ITEM_RECT(CMD_Rectangle,Skin3Rect,0,0,599,49,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin3)
SHOW_MAP_BODY(Skin3Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin3,0,0,299,24)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text5,0,0,299,24,STRID_NULL,0,0,0,0,14,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal2)
SHOW_MAP_BODY(Skin3)
SHOW_MAP_BODY(Text5)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal2,18,17,317,42)

SHOW_ITEM_RECT(CMD_Rectangle,Rect9,0,0,299,24,16,2,0,12,0,0,0)
SHOW_ITEM_RECT(CMD_Rectangle,Skin7Rect,0,0,299,24,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin7)
SHOW_MAP_BODY(Skin7Rect)
SHOW_MAP_BODY(Rect9)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin7,0,0,299,24)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text11,0,0,299,24,STRID_NULL,0,0,0,0,14,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Focused6)
SHOW_MAP_BODY(Skin7)
SHOW_MAP_BODY(Text11)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused6,18,17,317,42)

SHOW_MAP_BEGIN(Skin13)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin13,0,0,299,24)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text15,0,0,299,24,STRID_NULL,0,0,0,0,14,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable12)
SHOW_MAP_BODY(Skin13)
SHOW_MAP_BODY(Text15)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable12,18,17,317,42)

SHOW_MAP_BEGIN(Skin17)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin17,0,0,299,24)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text19,0,0,299,24,STRID_NULL,0,0,0,0,14,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable16)
SHOW_MAP_BODY(Skin17)
SHOW_MAP_BODY(Text19)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable16,18,17,317,42)

SHOW_MAP_BEGIN(Skin21)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin21,0,0,299,24)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text23,0,0,299,24,STRID_NULL,0,0,0,0,14,1,1,0,0,16,0,0,0,0)
SHOW_MAP_BEGIN(Pressed20)
SHOW_MAP_BODY(Skin21)
SHOW_MAP_BODY(Text23)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed20,18,17,317,42)

CREATE_MENU_ITEM_DATA(STRID_NULL24,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL25,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL26,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL27,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL28,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL29,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL30,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
CREATE_MENU_ITEM_DATA(STRID_NULL31,STRID_NULL,ICONID_NULL,STATUS_ENABLE,NULL,NULL)
SHOW_MAP_BEGIN(CalibrationMenu)
SHOW_MAP_BODY(Normal2)
SHOW_MAP_BODY(Focused6)
SHOW_MAP_BODY(Normal_Disable12)
SHOW_MAP_BODY(Focused_Disable16)
SHOW_MAP_BODY(Pressed20)
SHOW_MAP_END

DECLARE_EVENT(CalibrationMenu)
MENU_LIST_BEGIN(CalibrationMenu)
MENU_LIST_ITEM(STRID_NULL24)
MENU_LIST_ITEM(STRID_NULL25)
MENU_LIST_ITEM(STRID_NULL26)
MENU_LIST_ITEM(STRID_NULL27)
MENU_LIST_ITEM(STRID_NULL28)
MENU_LIST_ITEM(STRID_NULL29)
MENU_LIST_ITEM(STRID_NULL30)
MENU_LIST_ITEM(STRID_NULL31)
MENU_LIST_END

CREATE_MENU_DATA(CalibrationMenu,0,8,MENU_LAYOUT_VERTICAL|MENU_DISABLE_SHOW|MENU_SCROLL_CYCLE|MENU_SCROLL_NEXT_PAGE|MENU_DISABLE_NORMAL|MENU_DRAW_IMAGE)

CREATE_MENU_CTRL(CalibrationMenu,CalibrationMenu,0,18,17,317,42)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin33Rect,0,0,91,27,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Skin33)
SHOW_MAP_BODY(Skin33Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin33,0,0,91,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text35,0,0,79,15,STRID_NULL,0,0,0,0,13,13,13,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal32)
SHOW_MAP_BODY(Skin33)
SHOW_MAP_BODY(Text35)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal32,0,0,91,27)

SHOW_MAP_BEGIN(CalibrationStringArea)
SHOW_MAP_BODY(Normal32)
SHOW_MAP_END

DECLARE_EVENT(CalibrationStringArea)
CREATE_STATIC_DATA(CalibrationStringArea,STRID_ISO)
CREATE_STATIC_CTRL(CalibrationStringArea,0,0,0,91,27)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(CalibrationWnd)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(CalibrationWnd)
DECLARE_CTRL_LIST(CalibrationWnd)
CREATE_CTRL(CalibrationWnd,CalibrationWnd,CTRL_WND,NULL,0 ,0,0,319,239)
#endif