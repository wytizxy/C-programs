/*1452210 �����1�� ֣��Զ*/
#include <iostream>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <windows.h>
#include <mmsystem.h>			//������ý�庯����
#pragma comment(lib,"winmm.lib")//������ý�庯�����Ӧ�Ŀ��ļ�
using namespace std;

void gotoxy(HANDLE hout, const int X, const int Y);
void showch(HANDLE hout, const int X, const int Y, const int bg_color, const int fg_color, const char ch, const int n);
void setcolor(HANDLE hout, const int bg_color, const int fg_color);
int main()
{
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE); //ȡ��׼����豸��Ӧ�ľ��
    const int X=3;
    const int Y=17;
    const int bg_color=7;
    const int fg_color=1;
    const char ch=32;
    const int n=20;
    const int a=30;
    const int b=57;
    int i,ceng,s;
    char start,then;
    cout<<"�����������1-10��";
    cin>>ceng;
    while(ceng<1||ceng>10)
    {
        cout<<"������������������"<<endl;
        cout<<"�����������1-10��";
        cin>>ceng;
    }
    cout<<"��������ʼԲ����ţ�A/B/C��";
    cin>>start;
    s=start+'0'-'0';
    while(s!=65&&s!=66&&s!=67&&s!=97&&s!=98&&s!=99)
    {
        cout<<"�����������������"<<endl;
        cout<<"��������ʼԲ����ţ�A/B/C��";
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
    showch(hout,1,20,0,7,ch,1);
    cout<<"�����������Ǹ��̣�";
    cin>>then;
    int then1;
    then1=then+'0'-'0';
    while((then1!=65&&then1!=66&&then1!=67&&then1!=97&&then1!=98&&then1!=99)||then1==s)
    {
        cout<<"�����������������"<<endl;
        cout<<"�����������ĸ��̣���A/B/C��";
        cin>>then;
        then1=then+'0'-'0';
    }
    if(s==65||s==97)
    {
        if(then1==66||then1==98)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 40;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=12; x<MAX_X; x++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X-1) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
			for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X+27, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+13) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+28, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X+27, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+29, y, 0, 7, ' ', LENGTH-2);
				}
			}
        }
        else if(then1==67||then1==99)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 67;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=12; x<MAX_X; x++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X-1) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
			for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X+54, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+12) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+55, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X+54, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+56, y, 0, 7, ' ', LENGTH-2);
				}
			}
        }
    }
    if(s==66||s==98)
    {
        if(then1==65||then1==97)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 40;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=39; x>MAX_X-29; x--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X-1+27) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
        for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X-27, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+13) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1-27, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X-27, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2-27, y, 0, 7, ' ', LENGTH-2);
				}
			}
        }
        else if(then1==67||then1==99)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 67;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=39; x<MAX_X; x++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X-1) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
        for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X+27, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+13) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1+27, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X+27, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2+27, y, 0, 7, ' ', LENGTH-2);
				}

			}
        }
    }
    if(s==67||s==99)
    {
        if(then1==65||then1==97)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		    for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 40;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=39+27; x>MAX_X-29; x--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X+27) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
        for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X-27-27, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+13) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1-27-27, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X-27-27, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2-27-27, y, 0, 7, ' ', LENGTH-2);
				}
			}
        }
        else if(then1==66||then1==98)
        {
        const int MAX_Y = 3;
		const int X = x+9-ceng;
		const int bg_color = ceng;    //����Ϊ����ɫ
		const int fg_color = ceng;     //ǰ��Ϊ��ɫ
		const char ch = ' ';        //�ַ�Ϊ*(ע�⣺����ǿո���ǰ��ɫ�޷���ʾ)
		const int LENGTH = 3;
		int y;

		/* ��һ���ַ����������ƶ� */
		for (y=17-ceng; (y+ceng)>MAX_Y+ceng-4; y--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if ((y+ceng)>MAX_Y-1+ceng-4) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2, y, 0, 7, ' ', LENGTH-2);
				}
			}
        const int MAX_X = 40;
		const int Y = 0;


		int x;

		/* ��һ���ַ����������ƶ� */
		for (x=39+27; x>MAX_X-29; x--) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, x, Y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.1�� */
			Sleep(100);

			if (x<MAX_X+27) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, x, Y, 0, 7, ' ', LENGTH);   //������ɫ������-0-��ɫ  ǰ��-7-��ɫ
				}
			}
        for (y=0; y<=MAX_Y+13; y++) {
            /* ������(x,2)λ�ô�������ӡ10���ַ� */
			showch(hout, X+27, y, bg_color, fg_color, ch, LENGTH);

			/* ��ʱ0.3�� */
			Sleep(300);

			if (y<MAX_Y+13) {
				/* �����ʾ(���һ�α���)���������Ϊ��������ɫ+�ո��ػ�һ��ղŵ�λ�� */
                showch(hout, X+1+27, y, 7, 7, ' ', LENGTH-2);   //������0-��ɫ  ǰ����7����ɫ
                showch(hout, X+27, y, 0, 7, ' ', LENGTH-2);
                showch(hout, X+2+27, y, 0, 7, ' ', LENGTH-2);
				}

			}
        }
    }
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
setcolor(hout, 0, 0);


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

	/* ѭ��n�Σ���ӡ�ַ�ch */
	for (i=0; i<n; i++)
	    putchar(ch);
}
void setcolor(HANDLE hout, const int bg_color, const int fg_color)
{
	SetConsoleTextAttribute(hout, bg_color*16+fg_color);
}
