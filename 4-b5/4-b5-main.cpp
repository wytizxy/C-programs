/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;
int f1(double a,double b,double c,double d);
int f2(double a,double b,double c,double d);
int f3(double a,double b,double c,double d);
int f4(double a,double b,double c,double d);
int main()
{
    double a,b,c,d;
    cout<<"������һԪ���κ�����ϵ��"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    d=b*b-4*a*c;
    if(a==0)
    {
        f1(a,b,c,d);
    }
    else
    {
        if(d>0)
        {
            f2(a,b,c,d);
        }
        else if(d==0)
        {
            f3(a,b,c,d);
        }
        else if(d<0)
        {
            f4(a,b,c,d);
        }
    }
    return 0;
}

