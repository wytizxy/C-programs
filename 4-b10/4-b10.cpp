/*1452210 �����1�� ֣��Զ*/
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;

const int MAX_X=69;	//����*��ɵı߿�Ŀ��
const int MAX_Y=17;	//����*��ɵı߿�ĸ߶�

/* ������ƶ���ָ��λ�� */
void move(HANDLE hout, int X, int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(hout,coord);
}

/* ��ָ��λ�ô���ӡһ��ָ�����ַ� */
void show(HANDLE hout, int X, int Y, char ch)
{
	move(hout, X, Y);
	putchar(ch);
}

int main()
{
	HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��
	int    i;

	/* ����α����������ӣ�ֻ���ڳ���ʼʱִ��һ�μ��� */
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

	/* �����ʾ20����д��ĸ����ĸ��ֵ��XY���궼�����ʾ
	   rand()�����Ĺ��ܣ��������һ���� 0-32767 ֮�������*/
	for (i=0; i<20; i++)
		show(hout, rand()%MAX_X+1, rand()%MAX_Y+1, 'A'+rand()%26);

	/* �ڴ˴������Ҫ�Ĵ���-begin */
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
        cout << "��Ϸ���������س����˳�." << endl;
	    getchar();
	    return 0;
    }
	/* �ڴ˴������Ҫ�Ĵ���-end */

	cout << "��Ϸ���������س����˳�." << endl;
	getchar();
	return 0;
}
