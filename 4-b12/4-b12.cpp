/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int zeller(int year,int month,int day=1);
int calender(int year,int month,int day);
int main()
{
    int year,month,day,p,t,f,x,m,y,d;
    cout<<"��������ݣ�1900-2100�����·ݣ��Իس���Ϊ�����"<<endl;
    cin>>y;
    cin>>m;
    while(y<1900||y>2100||m<1||m>12)
    {
        cout<<"����Ƿ�������������"<<endl;
        cin>>y;
        cin>>m;
    }
    year=y;
    month=m;
    day=zeller(year,month);
    calender(year,month,day);

    return 0;
}
int zeller(int year,int month,int day)
{
    int c,y,m,d,w;
    d=day;
    m=month;
    if(m==1)
    {
        m=13;
        year=year-1;
        c=year/100;
        y=year-(c*100);
    }
    else if(m==2)
    {
        m=14;
        year=year-1;
        c=year/100;
        y=year-(c*100);
    }
    else
    {
        c=year/100;
        y=year-(c*100);
    }
    w=y+(y/4)+(c/4)-2*c+(13*(m+1)/5)+d-1;
    if(w<0)
    {
        while(w<0)
        {
            w=w+7;
        }
    }
    w=w%7;
    return w;
}

int calender(int y,int m,int d)
{
    int p,t,f;
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

}
