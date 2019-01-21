/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,f;
    int fac(int n);
    cout<<"a=";
    cin>>a;
    while(a>=13||a<0)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cout<<"a=";
        cin>>a;
    }
    cout<<"b=";
    cin>>b;
    while(b>=13||b<0)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cout<<"b=";
        cin>>b;
    }
    cout<<"c=";
    cin>>c;
    while(c>=13||c<0)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cout<<"c=";
        cin>>c;
    }
    f=fac(a)+fac(b)+fac(c);
    if(f<=2147483647&&f>0)
    {
        cout<<"a!+b!+c!="<<f;
    }
    return 0;
}
int fac(int n)
{
    int t;
    t=1;
    while(n>=1)
    {
        t=t*n;
        n--;
    }
    return t;
}
