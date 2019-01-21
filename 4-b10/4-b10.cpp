/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X=69;	//定义*组成的边框的宽度
const int MAX_Y=17;	//定义*组成的边框的高度

/* 将光标移动到指定位置 */
void move(HANDLE hout, int X, int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout,coord);
}

/* 在指定位置处打印一个指定的字符 */
void show(HANDLE hout, int X, int Y, char ch)
{
	move(hout, X, Y);
	putchar(ch);
}

int main()
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //取标准输出设备对应的句柄
	int    i;

	/* 生成伪随机数的种子，只需在程序开始时执行一次即可 */
	srand(time(0));

	cout << "***********************************************************************" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "*                                                                     *" << endl;
	cout << "***********************************************************************" << endl;

	/* 随机显示20个大写字母，字母的值、XY坐标都随机显示
	   rand()函数的功能：随机生成一个在 0-32767 之间的整数*/
	for (i=0; i<20; i++)
		show(hout, rand()%MAX_X+1, rand()%MAX_Y+1, 'A'+rand()%26);

	/* 在此处添加需要的代码-begin */
	int X,Y;
	X=37;
	Y=9;
	move(hout,X,Y);
	char t,ch;
	ch=32;
	t=getch();
	while(t==106||t==107||t==105||t==108||t==32)
    {
        if(t==106)
        {
            X=X-1;
        }
        else if(t==105)
        {
            Y=Y-1;
        }
        else if(t==107)
        {
            Y=Y+1;
        }
        else if(t==108)
        {
            X=X+1;
        }
        move(hout,X,Y);
        if(t==32)
        {
            show(hout,X,Y,ch);
        }
        t=getch();
    }
    if(t==113)
    {
        Y=23;
        X=0;
        move(hout,X,Y);
        cout << "游戏结束，按回车键退出." << endl;
	    getchar();
	    return 0;
    }
	/* 在此处添加需要的代码-end */

	cout << "游戏结束，按回车键退出." << endl;
	getchar();
	return 0;
}
