/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int zeller(int year,int month,int day);
int main()
{
    int year,month,day,t;
    cout<<"year=";
    cin>>year;
    while(1900>year||year>2100)
    {
        cout<<"输入有误请重新输入，年份为1900-2100"<<endl;
        cout<<"year=";
        cin>>year;
    }
    cout<<"month=";
    cin>>month;
    while(1>month||month>12)
    {
        cout<<"月份输入有误，请重新输入"<<endl;
        cout<<"month=";
        cin>>month;
    }
    cout<<"day=";
    cin>>day;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
                {
                    while(day<1||day>31)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
                else if(month==4||month==6||month==9||month==11)
                {
                    while(day<1||day>30)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
                else if(month==2)
                {
                    while(day<1||day>29)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
            }
            else
            {
                if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
                {
                    while(day<1||day>31)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
                else if(month==4||month==6||month==9||month==11)
                {
                    while(day<1||day>30)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
                else if(month==2)
                {
                    while(day<1||day>28)
                    {
                        cout<<"日期输入有误，请重新输入";
                        cout<<"day=";
                        cin>>day;
                    }
                }
            }
        }
        else
        {
            if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
            {
                while(day<1||day>31)
                {
                    cout<<"日期输入有误，请重新输入";
                    cout<<"day=";
                    cin>>day;
                }
            }
            else if(month==4||month==6||month==9||month==11)
            {
                while(day<1||day>30)
                {
                    cout<<"日期输入有误，请重新输入";
                    cout<<"day=";
                    cin>>day;
                }
            }
            else if(month==2)
            {
                while(day<1||day>29)
                {
                    cout<<"日期输入有误，请重新输入";
                    cout<<"day=";
                    cin>>day;
                }
            }
        }
    }
    else
    {
        if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
        {
            while(day<1||day>31)
            {
                cout<<"日期输入有误，请重新输入";
                cout<<"day=";
                cin>>day;
            }
        }
        else if(month==4||month==6||month==9||month==11)
        {
            while(day<1||day>30)
            {
                cout<<"日期输入有误，请重新输入";
                cout<<"day=";
                cin>>day;
            }
        }
        else if(month==2)
        {
            while(day<1||day>29)
            {
                cout<<"日期输入有误，请重新输入";
                cout<<"day=";
                cin>>day;
            }
        }
    }
    t=zeller(year,month,day);
    if(t==0)
        cout<<"星期"<<"日";
    else if(t==1)
        cout<<"星期"<<"一";
    else if(t==2)
        cout<<"星期"<<"二";
    else if(t==3)
        cout<<"星期"<<"三";
    else if(t==4)
        cout<<"星期"<<"四";
    else if(t==5)
        cout<<"星期"<<"五";
    else if(t==6)
        cout<<"星期"<<"六";
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
