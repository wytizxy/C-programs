/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

unsigned long f(int);
int main()
{
    unsigned long n,t;
    cout<<"n=";
    cin>>n;
    while(n>=2344)
    {
        cout<<"输入有误，请重新输入"<<endl;
        cout<<"n=";
        cin>>n;
    }
    cout<<"f(x)=";
    t=f(n);
    cout<<t;
    return 0;
}
unsigned long f(int n)
{
    unsigned long a,b;
    a=1;
    b=0;
    while(a<=n)
    {
        b=b+a*a;
        a++;
    }
    return b;
}
