#include<iostream>
using namespace std;
#include <conio.h>
#include<string>
#include<string.h>
//#include<cmath>
//#include <Windows.h>
#include<time.h>
//#pragma warning(disable:4996) // bỏ qua lỗi 4996 - lỗi bảo mật

// định danh mã ascii cho các màu sắc đơn
#define ColorCode_Back			0
#define ColorCode_DarkBlue		1
#define ColorCode_DarkGreen		2
#define ColorCode_DarkCyan		3
#define ColorCode_DarkRed		4
#define ColorCode_DarkPink		5
#define ColorCode_DarkYellow	6
#define ColorCode_DarkWhite		7
#define ColorCode_Grey			8
#define ColorCode_Blue			9
#define ColorCode_Green			10
#define ColorCode_Cyan			11
#define ColorCode_Red			12
#define ColorCode_Pink			13
#define ColorCode_Yellow		14
#define ColorCode_White			15

#define default_ColorCode		7

// định danh mã ascii cho các phím điều khiển
#define key_Up		1072
#define key_Down	1080
#define key_Left	1075
#define key_Right	1077
#define key_none	-1
//
//
//int inputKey();
void Name();
//-------------------------Screen-------------------------

//Ham xoa man hinh
void clrscr();
//
////Vi tri con tro chi vi tren man hinh console
void gotoXY(int column, int line);
////screen: get [x]
//int whereX();
//
////screen: get [y]
//int whereY();
//
////Mau chu
void TextColor (int color);
////end----------------------Screen----------------------end
//
//
////Xu li con tro chi vi
//void Xu_Li_Con_Tro_Chi_Vi(bool CursorVisibility);
//
////Thay doi kich thuoc man hinh console
void resizeConsole(int width, int height);


//Vo hieu hoa thay doi kich thuoc man hinh
void DisableResizeWindow();

//Ham an thanh cuon
void remove_scrollbar();

//Vo hieu hoa nut Minimize, Maximize va Close
void DisableCtrButton(bool Close, bool Min, bool Max);

//VO HIEU HOA BOI DEN
void DisableSelection();

//AN CON TRO TREN MAN HINH
void ShowConsoleCursor(bool showFlag);


