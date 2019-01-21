/*1452210 1∞‡ ÷£Œı‘∂*/
#include <iostream>
#include <math.h>
using namespace std;

int f1(double a,double b,double c,double d)
{
    double x;
    x=-(b/c);
    cout<<"x="<<x;
    return 0;
}
int f2(double a,double b,double c,double d)
{
    double x1,x2;
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
    cout<<"x1="<<x1<<endl;
    cout<<"x2="<<x2<<endl;
    return 0;
}
int f3(double a,double b,double c,double d)
{
    double x;
    x=(-b)/(2*a);
    cout<<"x="<<x<<endl;
    return 0;
}
int f4(double a,double b,double c,double d)
{
    double x,p;
    x=(-b)/(2*a);
    p=(sqrt(-d))/(2*a);
    cout<<"x1="<<x<<"+"<<p<<"i"<<endl;
    cout<<"x1="<<x<<"-"<<p<<"i"<<endl;
    return 0;
}
