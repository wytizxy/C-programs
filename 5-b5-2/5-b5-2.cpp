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
    int i,ceng,s;
    char start;
    cout<<"请输入层数（1-10）";
    cin>>ceng;
    while(ceng<1||ceng>10)
    {
        cout<<"输入有误，请重新输入"<<endl;
        cout<<"请输入层数（1-10）";
        cin>>ceng;
    }
    cout<<"请输入起始圆柱编号（A/B/C）";
    cin>>start;
    s=start+'0'-'0';
    while(s!=65&&s!=66&&s!=67&&s!=97&&s!=98&&s!=99)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cout<<"请输入起始圆柱编号（A/B/C）";
        cin>>start;
        s=start+'0'-'0';
    }
    int m;
    m=0;
    while(m<100)
    {
        showch(hout,m,0,0,0,ch,100);
        m++;
    }
    showch(hout,X,Y,bg_color,fg_color,ch,n+1);
    showch(hout,a,Y,bg_color,fg_color,ch,n+1);
    showch(hout,b,Y,bg_color,fg_color,ch,n+1);
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
    int h,z1,l,x,y;
    l=2*ceng+1;
    z1=1;
    h=1;
    y=Y;
    if(s==65||s==97)
    {
        x=X;
        while(h<=ceng)
        {
            showch(hout,x+10-ceng,y-1,z1,z1,ch,l);
            l=l-2;
            z1++;
            h++;
            x++;
            y--;
        }
    }
    else if(s==66||s==98)
    {
        x=a;
        while(h<=ceng)
        {
            showch(hout,x+10-ceng,y-1,z1,z1,ch,l);
            l=l-2;
            z1++;
            h++;
            x++;
            y--;
        }
    }
    else if(s==67||s==99)
    {
        x=b;
        while(h<=ceng)
        {
            showch(hout,x+10-ceng,y-1,z1,z1,ch,l);
            l=l-2;
            z1++;
            h++;
            x++;
            y--;
        }
    }
    showch(hout,1,20,0,0,ch,1);

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
