/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    float x,t,a,b;
    a=0;
    b=1;
    x=(0+1)/2;
    t=2*x*x*x-9*x*x+12*x-3;
    while(t>1e-6||t<-1e-6)
    {
        if(t>0)
            {
                b=x;
                x=(a+x)/2;
                t=2*x*x*x-9*x*x+12*x-3;
            }
        else if(t<0)
            {
                a=x;
                x=(x+b)/2;
                t=2*x*x*x-9*x*x+12*x-3;
            }
    }
    cout<<"���̵Ľ�Ϊ"<<x;

    return 0;
}
