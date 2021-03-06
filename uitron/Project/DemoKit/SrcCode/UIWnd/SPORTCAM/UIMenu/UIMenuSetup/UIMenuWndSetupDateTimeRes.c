//This source code is generated by UI Designer Studio.

#ifndef UIMENUWNDSETUPDATETIMERES_H
#define UIMENUWNDSETUPDATETIMERES_H

#include "UIFramework.h"
#include "UIFrameworkExt.h"
#include "UIGraphics.h"
#include "NVTToolCommand.h"
#include "UIDisplayUtil.h"
//------------------------------------------------------------

SHOW_MAP_BEGIN(Skin1)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin1, 0, 0, 319, 239)

SHOW_ITEM_RECT(CMD_Rectangle, Skin2Rect, 0, 0, 243, 150, 0, 0, 14, 14, 0, 0, 0)
SHOW_MAP_BEGIN(Skin2)
SHOW_MAP_BODY(Skin2Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin2, 0, 0, 243, 150)

SHOW_MAP_BEGIN(Skin4)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin4, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text6, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal3)
SHOW_MAP_BODY(Skin4)
SHOW_MAP_BODY(Text6)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal3, 65, 49, 92, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect10, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin8)
SHOW_MAP_BODY(RoundRect10)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin8, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text12, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused7)
SHOW_MAP_BODY(Skin8)
SHOW_MAP_BODY(Text12)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused7, 65, 49, 92, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin14Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin14)
SHOW_MAP_BODY(Skin14Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin14, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text16, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable13)
SHOW_MAP_BODY(Skin14)
SHOW_MAP_BODY(Text16)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable13, 65, 49, 92, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin18Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin18)
SHOW_MAP_BODY(Skin18Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin18, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text20, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable17)
SHOW_MAP_BODY(Skin18)
SHOW_MAP_BODY(Text20)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable17, 65, 49, 92, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin22Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin22)
SHOW_MAP_BODY(Skin22Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin22, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text24, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed21)
SHOW_MAP_BODY(Skin22)
SHOW_MAP_BODY(Text24)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed21, 65, 49, 92, 121)

CREATE_BUTTON_ITEM_DATA(STRID_025, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
SHOW_MAP_BODY(Normal3)
SHOW_MAP_BODY(Focused7)
SHOW_MAP_BODY(Normal_Disable13)
SHOW_MAP_BODY(Focused_Disable17)
SHOW_MAP_BODY(Pressed21)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y)
BUTTON_LIST_ITEM(STRID_025)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y, UIMenuWndSetupDateTime_YMD_Y, 0, 30, 8, 57, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin27)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin27, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text29, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal26)
SHOW_MAP_BODY(Skin27)
SHOW_MAP_BODY(Text29)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal26, 80, 49, 107, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect33, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin31)
SHOW_MAP_BODY(RoundRect33)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin31, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text35, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused30)
SHOW_MAP_BODY(Skin31)
SHOW_MAP_BODY(Text35)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused30, 80, 49, 107, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin37Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin37)
SHOW_MAP_BODY(Skin37Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin37, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text39, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable36)
SHOW_MAP_BODY(Skin37)
SHOW_MAP_BODY(Text39)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable36, 80, 49, 107, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin41Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin41)
SHOW_MAP_BODY(Skin41Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin41, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text43, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable40)
SHOW_MAP_BODY(Skin41)
SHOW_MAP_BODY(Text43)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable40, 80, 49, 107, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin45Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin45)
SHOW_MAP_BODY(Skin45Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin45, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text47, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed44)
SHOW_MAP_BODY(Skin45)
SHOW_MAP_BODY(Text47)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed44, 80, 49, 107, 121)

CREATE_BUTTON_ITEM_DATA(STRID_048, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y2)
SHOW_MAP_BODY(Normal26)
SHOW_MAP_BODY(Focused30)
SHOW_MAP_BODY(Normal_Disable36)
SHOW_MAP_BODY(Focused_Disable40)
SHOW_MAP_BODY(Pressed44)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y2)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y2)
BUTTON_LIST_ITEM(STRID_048)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y2, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y2, UIMenuWndSetupDateTime_YMD_Y2, 0, 45, 8, 72, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin50)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin50, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text52, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal49)
SHOW_MAP_BODY(Skin50)
SHOW_MAP_BODY(Text52)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal49, 95, 49, 122, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect56, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin54)
SHOW_MAP_BODY(RoundRect56)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin54, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text58, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused53)
SHOW_MAP_BODY(Skin54)
SHOW_MAP_BODY(Text58)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused53, 95, 49, 122, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin60Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin60)
SHOW_MAP_BODY(Skin60Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin60, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text62, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable59)
SHOW_MAP_BODY(Skin60)
SHOW_MAP_BODY(Text62)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable59, 95, 49, 122, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin64Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin64)
SHOW_MAP_BODY(Skin64Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin64, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text66, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable63)
SHOW_MAP_BODY(Skin64)
SHOW_MAP_BODY(Text66)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable63, 95, 49, 122, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin68Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin68)
SHOW_MAP_BODY(Skin68Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin68, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text70, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed67)
SHOW_MAP_BODY(Skin68)
SHOW_MAP_BODY(Text70)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed67, 95, 49, 122, 121)

CREATE_BUTTON_ITEM_DATA(STRID_071, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y3)
SHOW_MAP_BODY(Normal49)
SHOW_MAP_BODY(Focused53)
SHOW_MAP_BODY(Normal_Disable59)
SHOW_MAP_BODY(Focused_Disable63)
SHOW_MAP_BODY(Pressed67)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y3)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y3)
BUTTON_LIST_ITEM(STRID_071)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y3, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y3, UIMenuWndSetupDateTime_YMD_Y3, 0, 60, 8, 87, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin73)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin73, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text75, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal72)
SHOW_MAP_BODY(Skin73)
SHOW_MAP_BODY(Text75)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal72, 110, 49, 137, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect79, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin77)
SHOW_MAP_BODY(RoundRect79)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin77, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text81, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused76)
SHOW_MAP_BODY(Skin77)
SHOW_MAP_BODY(Text81)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused76, 110, 49, 137, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin83Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin83)
SHOW_MAP_BODY(Skin83Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin83, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text85, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable82)
SHOW_MAP_BODY(Skin83)
SHOW_MAP_BODY(Text85)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable82, 110, 49, 137, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin87Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin87)
SHOW_MAP_BODY(Skin87Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin87, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text89, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable86)
SHOW_MAP_BODY(Skin87)
SHOW_MAP_BODY(Text89)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable86, 110, 49, 137, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin91Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin91)
SHOW_MAP_BODY(Skin91Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin91, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text93, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed90)
SHOW_MAP_BODY(Skin91)
SHOW_MAP_BODY(Text93)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed90, 110, 49, 137, 121)

CREATE_BUTTON_ITEM_DATA(STRID_094, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_Y4)
SHOW_MAP_BODY(Normal72)
SHOW_MAP_BODY(Focused76)
SHOW_MAP_BODY(Normal_Disable82)
SHOW_MAP_BODY(Focused_Disable86)
SHOW_MAP_BODY(Pressed90)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_Y4)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_Y4)
BUTTON_LIST_ITEM(STRID_094)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_Y4, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_Y4, UIMenuWndSetupDateTime_YMD_Y4, 0, 75, 8, 102, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin96)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin96, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text98, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal95)
SHOW_MAP_BODY(Skin96)
SHOW_MAP_BODY(Text98)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal95, 150, 49, 177, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect102, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin100)
SHOW_MAP_BODY(RoundRect102)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin100, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text104, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused99)
SHOW_MAP_BODY(Skin100)
SHOW_MAP_BODY(Text104)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused99, 150, 49, 177, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin106Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin106)
SHOW_MAP_BODY(Skin106Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin106, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text108, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable105)
SHOW_MAP_BODY(Skin106)
SHOW_MAP_BODY(Text108)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable105, 150, 49, 177, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin110Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin110)
SHOW_MAP_BODY(Skin110Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin110, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text112, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable109)
SHOW_MAP_BODY(Skin110)
SHOW_MAP_BODY(Text112)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable109, 150, 49, 177, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin114Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin114)
SHOW_MAP_BODY(Skin114Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin114, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text116, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed113)
SHOW_MAP_BODY(Skin114)
SHOW_MAP_BODY(Text116)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed113, 150, 49, 177, 121)

CREATE_BUTTON_ITEM_DATA(STRID_0117, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_M)
SHOW_MAP_BODY(Normal95)
SHOW_MAP_BODY(Focused99)
SHOW_MAP_BODY(Normal_Disable105)
SHOW_MAP_BODY(Focused_Disable109)
SHOW_MAP_BODY(Pressed113)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_M)
BUTTON_LIST_ITEM(STRID_0117)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_M, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_M, UIMenuWndSetupDateTime_YMD_M, 0, 115, 8, 142, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin119)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin119, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text121, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal118)
SHOW_MAP_BODY(Skin119)
SHOW_MAP_BODY(Text121)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal118, 165, 49, 192, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect125, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin123)
SHOW_MAP_BODY(RoundRect125)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin123, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text127, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused122)
SHOW_MAP_BODY(Skin123)
SHOW_MAP_BODY(Text127)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused122, 165, 49, 192, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin129Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin129)
SHOW_MAP_BODY(Skin129Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin129, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text131, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable128)
SHOW_MAP_BODY(Skin129)
SHOW_MAP_BODY(Text131)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable128, 165, 49, 192, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin133Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin133)
SHOW_MAP_BODY(Skin133Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin133, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text135, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable132)
SHOW_MAP_BODY(Skin133)
SHOW_MAP_BODY(Text135)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable132, 165, 49, 192, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin137Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin137)
SHOW_MAP_BODY(Skin137Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin137, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text139, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed136)
SHOW_MAP_BODY(Skin137)
SHOW_MAP_BODY(Text139)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed136, 165, 49, 192, 121)

CREATE_BUTTON_ITEM_DATA(STRID_0140, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_M2)
SHOW_MAP_BODY(Normal118)
SHOW_MAP_BODY(Focused122)
SHOW_MAP_BODY(Normal_Disable128)
SHOW_MAP_BODY(Focused_Disable132)
SHOW_MAP_BODY(Pressed136)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_M2)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_M2)
BUTTON_LIST_ITEM(STRID_0140)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_M2, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_M2, UIMenuWndSetupDateTime_YMD_M2, 0, 130, 8, 157, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin142)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin142, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text144, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal141)
SHOW_MAP_BODY(Skin142)
SHOW_MAP_BODY(Text144)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal141, 205, 49, 232, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect148, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin146)
SHOW_MAP_BODY(RoundRect148)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin146, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text150, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused145)
SHOW_MAP_BODY(Skin146)
SHOW_MAP_BODY(Text150)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused145, 205, 49, 232, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin152Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin152)
SHOW_MAP_BODY(Skin152Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin152, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text154, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable151)
SHOW_MAP_BODY(Skin152)
SHOW_MAP_BODY(Text154)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable151, 205, 49, 232, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin156Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin156)
SHOW_MAP_BODY(Skin156Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin156, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text158, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable155)
SHOW_MAP_BODY(Skin156)
SHOW_MAP_BODY(Text158)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable155, 205, 49, 232, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin160Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin160)
SHOW_MAP_BODY(Skin160Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin160, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text162, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed159)
SHOW_MAP_BODY(Skin160)
SHOW_MAP_BODY(Text162)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed159, 205, 49, 232, 121)

CREATE_BUTTON_ITEM_DATA(STRID_0163, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_D)
SHOW_MAP_BODY(Normal141)
SHOW_MAP_BODY(Focused145)
SHOW_MAP_BODY(Normal_Disable151)
SHOW_MAP_BODY(Focused_Disable155)
SHOW_MAP_BODY(Pressed159)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_D)
BUTTON_LIST_ITEM(STRID_0163)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_D, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_D, UIMenuWndSetupDateTime_YMD_D, 0, 170, 8, 197, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin165)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin165, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text167, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal164)
SHOW_MAP_BODY(Skin165)
SHOW_MAP_BODY(Text167)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal164, 220, 49, 247, 121)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect171, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin169)
SHOW_MAP_BODY(RoundRect171)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin169, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text173, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused168)
SHOW_MAP_BODY(Skin169)
SHOW_MAP_BODY(Text173)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused168, 220, 49, 247, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin175Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin175)
SHOW_MAP_BODY(Skin175Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin175, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text177, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable174)
SHOW_MAP_BODY(Skin175)
SHOW_MAP_BODY(Text177)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable174, 220, 49, 247, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin179Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin179)
SHOW_MAP_BODY(Skin179Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin179, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text181, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable178)
SHOW_MAP_BODY(Skin179)
SHOW_MAP_BODY(Text181)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable178, 220, 49, 247, 121)

SHOW_ITEM_RECT(CMD_Rectangle, Skin183Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin183)
SHOW_MAP_BODY(Skin183Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin183, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text185, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed182)
SHOW_MAP_BODY(Skin183)
SHOW_MAP_BODY(Text185)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed182, 220, 49, 247, 121)

CREATE_BUTTON_ITEM_DATA(STRID_0186, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_D2)
SHOW_MAP_BODY(Normal164)
SHOW_MAP_BODY(Focused168)
SHOW_MAP_BODY(Normal_Disable174)
SHOW_MAP_BODY(Focused_Disable178)
SHOW_MAP_BODY(Pressed182)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_D2)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_D2)
BUTTON_LIST_ITEM(STRID_0186)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_D2, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_D2, UIMenuWndSetupDateTime_YMD_D2, 0, 185, 8, 212, 80)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin188)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin188, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text190, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal187)
SHOW_MAP_BODY(Skin188)
SHOW_MAP_BODY(Text190)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal187, 120, 101, 147, 173)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect194, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin192)
SHOW_MAP_BODY(RoundRect194)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin192, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text196, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused191)
SHOW_MAP_BODY(Skin192)
SHOW_MAP_BODY(Text196)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused191, 120, 101, 147, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin198Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin198)
SHOW_MAP_BODY(Skin198Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin198, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text200, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable197)
SHOW_MAP_BODY(Skin198)
SHOW_MAP_BODY(Text200)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable197, 120, 101, 147, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin202Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin202)
SHOW_MAP_BODY(Skin202Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin202, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text204, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable201)
SHOW_MAP_BODY(Skin202)
SHOW_MAP_BODY(Text204)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable201, 120, 101, 147, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin206Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin206)
SHOW_MAP_BODY(Skin206Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin206, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text208, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed205)
SHOW_MAP_BODY(Skin206)
SHOW_MAP_BODY(Text208)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed205, 120, 101, 147, 173)

CREATE_BUTTON_ITEM_DATA(STRID_0209, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
SHOW_MAP_BODY(Normal187)
SHOW_MAP_BODY(Focused191)
SHOW_MAP_BODY(Normal_Disable197)
SHOW_MAP_BODY(Focused_Disable201)
SHOW_MAP_BODY(Pressed205)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_HR)
BUTTON_LIST_ITEM(STRID_0209)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_HR, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_HR, UIMenuWndSetupDateTime_YMD_HR, 0, 85, 60, 112, 132)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin211)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin211, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text213, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal210)
SHOW_MAP_BODY(Skin211)
SHOW_MAP_BODY(Text213)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal210, 135, 101, 162, 173)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect217, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin215)
SHOW_MAP_BODY(RoundRect217)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin215, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text219, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused214)
SHOW_MAP_BODY(Skin215)
SHOW_MAP_BODY(Text219)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused214, 135, 101, 162, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin221Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin221)
SHOW_MAP_BODY(Skin221Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin221, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text223, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable220)
SHOW_MAP_BODY(Skin221)
SHOW_MAP_BODY(Text223)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable220, 135, 101, 162, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin225Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin225)
SHOW_MAP_BODY(Skin225Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin225, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text227, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable224)
SHOW_MAP_BODY(Skin225)
SHOW_MAP_BODY(Text227)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable224, 135, 101, 162, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin229Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin229)
SHOW_MAP_BODY(Skin229Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin229, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text231, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed228)
SHOW_MAP_BODY(Skin229)
SHOW_MAP_BODY(Text231)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed228, 135, 101, 162, 173)

CREATE_BUTTON_ITEM_DATA(STRID_0232, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_HR2)
SHOW_MAP_BODY(Normal210)
SHOW_MAP_BODY(Focused214)
SHOW_MAP_BODY(Normal_Disable220)
SHOW_MAP_BODY(Focused_Disable224)
SHOW_MAP_BODY(Pressed228)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_HR2)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_HR2)
BUTTON_LIST_ITEM(STRID_0232)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_HR2, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_HR2, UIMenuWndSetupDateTime_YMD_HR2, 0, 100, 60, 127, 132)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin234)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin234, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text236, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal233)
SHOW_MAP_BODY(Skin234)
SHOW_MAP_BODY(Text236)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal233, 180, 101, 207, 173)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect240, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin238)
SHOW_MAP_BODY(RoundRect240)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin238, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text242, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused237)
SHOW_MAP_BODY(Skin238)
SHOW_MAP_BODY(Text242)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused237, 180, 101, 207, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin244Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin244)
SHOW_MAP_BODY(Skin244Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin244, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text246, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable243)
SHOW_MAP_BODY(Skin244)
SHOW_MAP_BODY(Text246)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable243, 180, 101, 207, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin248Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin248)
SHOW_MAP_BODY(Skin248Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin248, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text250, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable247)
SHOW_MAP_BODY(Skin248)
SHOW_MAP_BODY(Text250)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable247, 180, 101, 207, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin252Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin252)
SHOW_MAP_BODY(Skin252Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin252, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text254, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed251)
SHOW_MAP_BODY(Skin252)
SHOW_MAP_BODY(Text254)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed251, 180, 101, 207, 173)

CREATE_BUTTON_ITEM_DATA(STRID_0255, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
SHOW_MAP_BODY(Normal233)
SHOW_MAP_BODY(Focused237)
SHOW_MAP_BODY(Normal_Disable243)
SHOW_MAP_BODY(Focused_Disable247)
SHOW_MAP_BODY(Pressed251)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_MIN)
BUTTON_LIST_ITEM(STRID_0255)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_MIN, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_MIN, UIMenuWndSetupDateTime_YMD_MIN, 0, 145, 60, 172, 132)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin257)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin257, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text259, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal256)
SHOW_MAP_BODY(Skin257)
SHOW_MAP_BODY(Text259)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal256, 195, 101, 222, 173)

SHOW_ITEM_ROUNDRECT(CMD_RoundRect, RoundRect263, 7, 25, 21, 46, 16, 2, 0, 5, 0, 0, 0, 8, 2)
SHOW_MAP_BEGIN(Skin261)
SHOW_MAP_BODY(RoundRect263)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin261, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text265, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 14, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused260)
SHOW_MAP_BODY(Skin261)
SHOW_MAP_BODY(Text265)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused260, 195, 101, 222, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin267Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin267)
SHOW_MAP_BODY(Skin267Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin267, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text269, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal_Disable266)
SHOW_MAP_BODY(Skin267)
SHOW_MAP_BODY(Text269)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal_Disable266, 195, 101, 222, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin271Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin271)
SHOW_MAP_BODY(Skin271Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin271, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text273, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Focused_Disable270)
SHOW_MAP_BODY(Skin271)
SHOW_MAP_BODY(Text273)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Focused_Disable270, 195, 101, 222, 173)

SHOW_ITEM_RECT(CMD_Rectangle, Skin275Rect, 0, 0, 27, 72, 0, 0, 255, 255, 0, 0, 0)
SHOW_MAP_BEGIN(Skin275)
SHOW_MAP_BODY(Skin275Rect)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin275, 0, 0, 27, 72)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text277, 4, 21, 23, 50, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 0, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Pressed274)
SHOW_MAP_BODY(Skin275)
SHOW_MAP_BODY(Text277)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Pressed274, 195, 101, 222, 173)

CREATE_BUTTON_ITEM_DATA(STRID_0278, STRID_0, ICONID_NULL, STATUS_ENABLE, NULL)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_MIN2)
SHOW_MAP_BODY(Normal256)
SHOW_MAP_BODY(Focused260)
SHOW_MAP_BODY(Normal_Disable266)
SHOW_MAP_BODY(Focused_Disable270)
SHOW_MAP_BODY(Pressed274)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_MIN2)
BUTTON_LIST_BEGIN(UIMenuWndSetupDateTime_YMD_MIN2)
BUTTON_LIST_ITEM(STRID_0278)
BUTTON_LIST_END

CREATE_BUTTON_DATA(UIMenuWndSetupDateTime_YMD_MIN2, BTN_DRAW_IMAGE)

CREATE_BUTTON_CTRL(UIMenuWndSetupDateTime_YMD_MIN2, UIMenuWndSetupDateTime_YMD_MIN2, 0, 160, 60, 187, 132)
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin279)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin279, 0, 0, 239, 146)

SHOW_MAP_BEGIN(Skin281)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin281, 0, 0, 20, 29)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text283, 1, 0, 20, 29, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal280)
SHOW_MAP_BODY(Skin281)
SHOW_MAP_BODY(Text283)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal280, 136, 71, 156, 100)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
SHOW_MAP_BODY(Normal280)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other0, STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other0, 0, 98, 30, 118, 59)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin286)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin286, 0, 0, 20, 29)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text288, 1, 0, 20, 29, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal285)
SHOW_MAP_BODY(Skin286)
SHOW_MAP_BODY(Text288)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal285, 191, 71, 211, 100)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
SHOW_MAP_BODY(Normal285)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other1, STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other1, 0, 153, 30, 173, 59)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(Skin291)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Skin291, 0, 0, 20, 29)

SHOW_ITEM_TEXT(CMD_Text | CMD_ITEM, Text293, 1, 0, 20, 29, STRID_NULL, 0, 0, 0, 0, 2, 1, 1, 256, 0, 17, 0, 0, 0, 0)
SHOW_MAP_BEGIN(Normal290)
SHOW_MAP_BODY(Skin291)
SHOW_MAP_BODY(Text293)
SHOW_MAP_END

SHOW_ITEM_GROUP(CMD_Group, Normal290, 161, 121, 181, 150)

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
SHOW_MAP_BODY(Normal290)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CREATE_STATIC_DATA(UIMenuWndSetupDateTime_YMD_VALUE_Other2, STRID_L)
CREATE_STATIC_CTRL(UIMenuWndSetupDateTime_YMD_VALUE_Other2, 0, 123, 80, 143, 109)

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
SHOW_MAP_BODY(Skin279)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other0)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other1)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_VALUE_Other2)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab_YMD_VALUE, 0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab_YMD_VALUE, UIMenuWndSetupDateTime_Tab_YMD_VALUE, 0, 3, 0, 242, 146)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime_Tab)
SHOW_MAP_BODY(Skin2)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_BEGIN(UIMenuWndSetupDateTime_Tab)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y3)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_Y4)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_M)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_M2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_D)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_D2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_HR)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_HR2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_MIN)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_YMD_MIN2)
CTRL_LIST_ITEM(UIMenuWndSetupDateTime_Tab_YMD_VALUE)
CTRL_LIST_END

CREATE_TAB_DATA(UIMenuWndSetupDateTime_Tab, 0)

CREATE_TAB_CTRL(UIMenuWndSetupDateTime_Tab, UIMenuWndSetupDateTime_Tab, 0, 35, 41, 278, 191)
SHOW_MAP_BEGIN(UIMenuWndSetupDateTime)
SHOW_MAP_BODY(Skin1)
SHOW_MAP_END

DECLARE_EVENT(UIMenuWndSetupDateTime)
DECLARE_CTRL_LIST(UIMenuWndSetupDateTime)
CREATE_CTRL(UIMenuWndSetupDateTime, UIMenuWndSetupDateTime, CTRL_WND, NULL, 0, 0, 0, 319, 239)
#endif
