/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    double x,y;
    cin>>x;
    if(x<1)
        y=x;
    else
    {
        if(x<10)
            y=2*x-11;
        else
            y=3*x-11;
    }
    cout<<y;
    return 0;
}
