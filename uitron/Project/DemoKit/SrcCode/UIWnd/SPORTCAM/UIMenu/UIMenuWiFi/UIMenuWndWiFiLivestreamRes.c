//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDWIFILIVESTREAMRES_H
#define UIMENUWNDWIFILIVESTREAMRES_H

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

SHOW_MAP_BEGIN(Skin3)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin3,0,0,31,27)

SHOW_ITEM_IMAGE(CMD_Image|CMD_ITEM,Icon4, 0, 0, 31,27, ICONID_NULL,83886080,0,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal2)
SHOW_MAP_BODY(Skin3)
SHOW_MAP_BODY(Icon4)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal2,0,0,31,27)

SHOW_MAP_BEGIN(UIMenuWndWiFiLivestream_StaticICN_WiFi)
SHOW_MAP_BODY(Normal2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiLivestream_StaticICN_WiFi)
CREATE_STATIC_DATA(UIMenuWndWiFiLivestream_StaticICN_WiFi,ICON_MOVIE_LIVESTREAM)
CREATE_STATIC_CTRL(UIMenuWndWiFiLivestream_StaticICN_WiFi,0,0,0,31,27)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin7Rect,0,0,239,27,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin7)
SHOW_MAP_BODY(Skin7Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin7,0,0,239,27)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text9,0,0,239,27,STRID_NULL,0,0,0,0,2,1,1,256,0,0,0,0,0,0)
SHOW_MAP_BEGIN(Normal6)
SHOW_MAP_BODY(Skin7)
SHOW_MAP_BODY(Text9)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal6,31,0,270,27)

CREATE_STATE_ITEM_DATA(STRID_NULL_10,STRID_NULL_,ICONID_NULL,NULL) 
SHOW_MAP_BEGIN(UIMenuWndWiFiLivestream_StatusTXT_Livestream)
SHOW_MAP_BODY(Normal6)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiLivestream_StatusTXT_Livestream)
STATE_LIST_BEGIN(UIMenuWndWiFiLivestream_StatusTXT_Livestream)
STATE_LIST_ITEM(STRID_NULL_10)
STATE_LIST_END

CREATE_STATE_DATA(UIMenuWndWiFiLivestream_StatusTXT_Livestream,0)
CREATE_STATE_CTRL(UIMenuWndWiFiLivestream_StatusTXT_Livestream,0,31,0,270,27)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_ITEM_RECT(CMD_Rectangle,Skin11Rect,0,0,39,23,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin11)
SHOW_MAP_BODY(Skin11Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin11,0,0,39,23)

SHOW_ITEM_RECT(CMD_Rectangle,Skin13Rect,0,0,38,23,0,0,1,1,0,0,0)
SHOW_MAP_BEGIN(Skin13)
SHOW_MAP_BODY(Skin13Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin13,0,0,38,23)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text15,0,0,39,23,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal12)
SHOW_MAP_BODY(Skin13)
SHOW_MAP_BODY(Text15)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal12,143,212,181,235)

SHOW_MAP_BEGIN(Skin17)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin17,0,0,38,23)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text19,0,0,39,23,STRID_NULL,0,0,0,0,7,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused16)
SHOW_MAP_BODY(Skin17)
SHOW_MAP_BODY(Text19)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused16,143,212,181,235)

SHOW_MAP_BEGIN(Skin21)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin21,0,0,38,23)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text23,0,0,39,23,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Normal_Disable20)
SHOW_MAP_BODY(Skin21)
SHOW_MAP_BODY(Text23)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Normal_Disable20,143,212,181,235)

SHOW_MAP_BEGIN(Skin25)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin25,0,0,38,23)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text27,0,0,39,23,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Focused_Disable24)
SHOW_MAP_BODY(Skin25)
SHOW_MAP_BODY(Text27)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Focused_Disable24,143,212,181,235)

SHOW_MAP_BEGIN(Skin29)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Skin29,0,0,38,23)

SHOW_ITEM_TEXT(CMD_Text|CMD_ITEM,Text31,0,0,39,23,STRID_NULL,0,0,0,0,2,1,1,256,0,17,0,0,0,0)
SHOW_MAP_BEGIN(Pressed28)
SHOW_MAP_BODY(Skin29)
SHOW_MAP_BODY(Text31)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group,Pressed28,143,212,181,235)

CREATE_BUTTON_ITEM_DATA(STRID_OFF32,STRID_OFF,ICONID_NULL,STATUS_ENABLE,NULL) 
SHOW_MAP_BEGIN(Button_LivestreamOff)
SHOW_MAP_BODY(Normal12)
SHOW_MAP_BODY(Focused16)
SHOW_MAP_BODY(Normal_Disable20)
SHOW_MAP_BODY(Focused_Disable24)
SHOW_MAP_BODY(Pressed28)
SHOW_MAP_END

DECLARE_EVENT(Button_LivestreamOff)
BUTTON_LIST_BEGIN(Button_LivestreamOff)
BUTTON_LIST_ITEM(STRID_OFF32)
BUTTON_LIST_END

CREATE_BUTTON_DATA(Button_LivestreamOff,BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(Button_LivestreamOff,Button_LivestreamOff,0,0,0,38,23)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndWiFiLivestream_Tab_Off)
SHOW_MAP_BODY(Skin11)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiLivestream_Tab_Off)
CTRL_LIST_BEGIN(UIMenuWndWiFiLivestream_Tab_Off)
CTRL_LIST_ITEM(Button_LivestreamOff)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndWiFiLivestream_Tab_Off,0)

CREATE_TAB_CTRL(UIMenuWndWiFiLivestream_Tab_Off,UIMenuWndWiFiLivestream_Tab_Off,0,143,212,182,235)
SHOW_MAP_BEGIN(UIMenuWndWiFiLivestream)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndWiFiLivestream)
DECLARE_CTRL_LIST(UIMenuWndWiFiLivestream)
CREATE_CTRL(UIMenuWndWiFiLivestream,UIMenuWndWiFiLivestream,CTRL_WND,NULL,0 ,0,0,319,239)
#endif