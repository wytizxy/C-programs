/*1452210 计算机1班 郑熙远*/
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
    cout<<"a的平方根为"<<x;
    return 0;
}
