/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"输入两个正整数（以回车间隔）"<<endl;
    int m,n,a,b;
    cout<<"m=";
    cin>>m;
    cout<<"n=";
    cin>>n;
    a=1;
    if(m>n)
        b=m;
    else
        b=n;
    while(a%m!=0||a%n!=0)
    {
        a++;
    }
    while(m%b!=0||n%b!=0)
    {
        b--;
    }
    cout<<"最小公倍数为"<<a<<endl;
    cout<<"最大公约数为"<<b<<endl;
    return 0;
}
