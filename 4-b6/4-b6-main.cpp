/*1452210 1�� ֣��Զ*/
#include <iostream>
#include <math.h>
#include "4-b6.h"
using namespace std;

int main()
{
    double a,b,c,d,x1,x2;
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
