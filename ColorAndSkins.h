#pragma once
#include<Windows.h>

CONST INT g_i_WINDOW_COLOR = 0;
CONST INT g_i_DISPLAY_COLOR = 1;
CONST INT g_i_FONT_COLOR = 2;
CONST COLORREF g_clr_COLOR[][3] =
{
	{RGB(0,0,150), RGB(0,0,100), RGB(255,0,0)},
	{RGB(150,150,150), RGB(50,50,50), RGB(0,255,0)},
	{RGB(180,180,180), RGB(20,20,20), RGB(0,0,150)},
};
CONST CHAR* g_sz_SKIN[] = { "square_blue", "metal_mistral", "IconForButtons"};
