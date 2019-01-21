/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    int y,m,d,p,t,f;
    cout<<"请输入年份（2000-2030）和月份（以回车键为间隔）"<<endl;
    cin>>y;
    cin>>m;
    while(y<2000||y>2030||m<1||m>12)
    {
        cout<<"输入非法，请重新输入"<<endl;
        cin>>y;
        cin>>m;
    }
    cout<<"请输入"<<y<<"年"<<m<<"月1日的星期（0-6表示星期日到星期六）："<<endl;
    cin>>d;
    while(d<0||d>6)
    {
        cout<<"输入非法，请重新输入"<<endl;
        cin>>d;
    }
    cout<<endl;
    cout<<y<<"年"<<m<<"月的月历为："<<endl;
    cout<<"星期日 "<<"星期一 "<<"星期二 "<<"星期三 "<<"星期四 "<<"星期五 "<<"星期六"<<endl;
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
