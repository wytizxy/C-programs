/*1452210 1班 郑熙远*/
#include <iostream>
#include <math.h>
using namespace std;

int f1();
int f2();
int f3();
int f4();
double a,b,c;
int main()
{
    double d,x1,x2;
    cout<<"请输入一元二次函数的系数"<<endl;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    cout<<"c=";
    cin>>c;
    d=b*b-4*a*c;
    if(a==0)
    {
        f1();
    }
    else
    {
        if(d>0)
        {
            f2();
        }
        else if(d==0)
        {
            f3();
        }
        else if(d<0)
        {
            f4();
        }
    }
    return 0;
}
int f1()
{
    double x;
    x=-(b/c);
    cout<<"x="<<x;
    return 0;
}
int f2()
{
    double x1,x2,d;
    d=b*b-4*a*c;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    return 0;
}
int f3()
{
    double x,d;
    d=b*b-4*a*c;
    x=(-b)/(2*a);
    cout<<"x="<<x<<endl;
    return 0;
}
int f4()
{
    double x,p,d;
    d=b*b-4*a*c;
    x=(-b)/(2*a);
    p=(sqrt(-d))/(2*a);
    cout<<"x1="<<x<<"+"<<p<<"i"<<endl;
    cout<<"x1="<<x<<"-"<<p<<"i"<<endl;
    return 0;
}
