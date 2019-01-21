/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <windows.h>
#include <mmsystem.h>			//包含多媒体函数库
#pragma comment(lib,"winmm.lib")//包含多媒体函数库对应的库文件
using namespace std;

void gotoxy(HANDLE hout, const int X, const int Y);
void showch(HANDLE hout, const int X, const int Y, const int bg_color, const int fg_color, const char ch, const int n);
void setcolor(HANDLE hout, const int bg_color, const int fg_color);
int main()
{
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄
    const int X=3;
    const int Y=17;
    const int bg_color=7;
    const int fg_color=1;
    const char ch=32;
    const int n=20;
    const int a=30;
    const int b=57;
    int i;
    showch(hout,X,Y,bg_color,fg_color,ch,n);
    showch(hout,a,Y,bg_color,fg_color,ch,n);
    showch(hout,b,Y,bg_color,fg_color,ch,n);
    int v=1;
    while(v<17)
    {
        showch(hout,13,Y-v,bg_color,fg_color,ch,1);
        v++;
    }
    v=1;
    while(v<17)
    {
        showch(hout,40,Y-v,bg_color,fg_color,ch,1);
        v++;
    }
    v=1;
    while(v<17)
    {
        showch(hout,67,Y-v,bg_color,fg_color,ch,1);
        v++;
    }
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	return 0;
}

void gotoxy(HANDLE hout, const int X, const int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout,coord);
}
void showch(HANDLE hout, const int X, const int Y, const int bg_color, const int fg_color, const char ch, const int n)
{
    int i;
	gotoxy(hout, X, Y);
	setcolor(hout, bg_color, fg_color);

	/* 循环n次，打印字符ch */
	for (i=0; i<n; i++)
	    putchar(ch);
}
void setcolor(HANDLE hout, const int bg_color, const int fg_color)
{
	SetConsoleTextAttribute(hout, bg_color*16+fg_color);
}
