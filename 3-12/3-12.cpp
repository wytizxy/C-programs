/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,f;
    cout<<"������һ��������5λ��������"<<endl;
    cin>>a;
    {
    if(a>0 && a<1e1)
        cout<<"һλ��"<<endl;
    else if(a<1e2 && a>=1e1)
        cout<<"��λ��"<<endl;
    else if(a<1e3 && a>=1e2)
        cout<<"��λ��"<<endl;
    else if(a<1e4 && a>=1e3)
        cout<<"��λ��"<<endl;
    else
        cout<<"��λ��"<<endl;
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
