/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout<<"请输入一个不多于5位的正整数"<<endl;
    cin>>a;
    {
    if(a>0 && a<1e1)
        cout<<"一位数"<<endl;
    else if(a<1e2 && a>=1e1)
        cout<<"两位数"<<endl;
    else if(a<1e3 && a>=1e2)
        cout<<"三位数"<<endl;
    else if(a<1e4 && a>=1e3)
        cout<<"四位数"<<endl;
    else
        cout<<"五位数"<<endl;
    }
    {
    if(a>0 && a<1e1)
        {
            cout<<a<<endl;
            cout<<a<<endl;
        }
    else if(a<1e2 && a>=1e1)
        {
            e=a/1e1;
            f=a-e*1e1;
            cout<<e<<'\0'<<f<<endl;
            cout<<f<<e<<endl;
        }
    else if(a<1e3 && a>=1e2)
        {
            d=a/1e2;
            e=(a-1e2*d)/1e1;
            f=a-1e2*d-1e1*e;
            cout<<d<<'\0'<<e<<'\0'<<f<<endl;
            cout<<f<<e<<d<<endl;
        }
    else if(a<1e4 && a>=1e3)
        {
            c=a/1e3;
            d=(a-1e3*c)/1e2;
            e=(a-1e3*c-1e2*d)/1e1;
            f=a-1e3*c-1e2*d-1e1*e;
            cout<<c<<'\0'<<d<<'\0'<<e<<'\0'<<f<<endl;
            cout<<f<<e<<d<<c<<endl;
        }
    else
        {
            b=a/1e4;
            c=(a-b*1e4)/1e3;
            d=(a-b*1e4-c*1e3)/1e2;
            e=(a-b*1e4-c*1e3-d*1e2)/1e1;
            f=a-b*1e4-c*1e3-d*1e2-e*1e1;
            cout<<b<<'\0'<<c<<'\0'<<d<<'\0'<<e<<'\0'<<f<<endl;
            cout<<f<<e<<d<<c<<b<<endl;
        }


    }
    return 0;
}
