/*1452210 �����1�� ֣��Զ*/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a,x,x0;
    cout<<"a=";
    cin>>a;
    x0=1;
    x=(x0+a/x0)/2;
    do
    {
        x0=x;
        x=(x0+a/x0)/2;
    }
    while(abs(x-x0)>=1e-5);
    cout<<"a��ƽ����Ϊ"<<x;
    return 0;
}
