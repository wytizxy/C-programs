/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;
int f(int);
int main()
{
    int n,t;
    cout<<"n=(1��40)";
    cin>>n;
    while(n<=0||n>=41)
    {
        cout<<"����������������롣"<<endl;
        cout<<"n=";
        cin>>n;
    }
    t=f(n);
    cout<<"f(n)="<<t;
    return 0;
}
int f(int n)
{
    int t;
    if(n==0)
    {
        t=0;
    }
    else if(n==1)
    {
        t=1;
    }
    else
    {
        t=f(n-1)+f(n-2);
    }
    return t;
}
