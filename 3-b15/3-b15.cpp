/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    int y,m,d,p,t,f;
    cout<<"��������ݣ�2000-2030�����·ݣ��Իس���Ϊ�����"<<endl;
    cin>>y;
    cin>>m;
    while(y<2000||y>2030||m<1||m>12)
    {
        cout<<"����Ƿ�������������"<<endl;
        cin>>y;
        cin>>m;
    }
    cout<<"������"<<y<<"��"<<m<<"��1�յ����ڣ�0-6��ʾ�����յ�����������"<<endl;
    cin>>d;
    while(d<0||d>6)
    {
        cout<<"����Ƿ�������������"<<endl;
        cin>>d;
    }
    cout<<endl;
    cout<<y<<"��"<<m<<"�µ�����Ϊ��"<<endl;
    cout<<"������ "<<"����һ "<<"���ڶ� "<<"������ "<<"������ "<<"������ "<<"������"<<endl;
    p=1;
    t=0;
    while(t<d)
    {
        cout<<"       ";
        t++;
    }
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            {
                if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                    f=31;
                else if(m==4||m==6||m==9||m==11)
                    f=30;
                else if(m==2)
                    f=29;
            }
            else
            {
                if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                    f=31;
                else if(m==4||m==6||m==9||m==11)
                    f=30;
                else if(m==2)
                    f=28;
            }
        }
        else
        {
            if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
                f=31;
            else if(m==4||m==6||m==9||m==11)
                f=30;
            else if(m==2)
                f=29;
        }
    }
    else
    {
        if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            f=31;
        else if(m==4||m==6||m==9||m==11)
            f=30;
        else if(m==2)
            f=28;
            }
    while((p+t)<=7)
    {
        cout<<"   "<<p;
        p++;
        cout<<"   ";
    }
    cout<<endl;
    while((p+t)<=14)
    {
        if(p<10)
         {
            cout<<"   "<<p;
            p++;
            cout<<"   ";
         }
        else
        {
            cout<<"  "<<p;
            p++;
            cout<<"   ";
        }
    }
    cout<<endl;
    while((p+t)<=21)
    {
        if(p<10)
         {
            cout<<"   "<<p;
            p++;
            cout<<"   ";
         }
        else
        {
            cout<<"  "<<p;
            p++;
            cout<<"   ";
        }
    }
    cout<<endl;
    while(p<=f&&(p+t)<=28)
    {
        cout<<"  "<<p;
        p++;
        cout<<"   ";
    }
    cout<<endl;
    while(p<=f&&(p+t)<=35)
    {
        cout<<"  "<<p;
        p++;
        cout<<"   ";
    }
    cout<<endl;
    while(p<=f&&(p+t)<=42)
    {
        cout<<"  "<<p;
        p++;
        cout<<"   ";
    }

    return 0;
}
