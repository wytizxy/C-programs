/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;
int main()
{
    void f(int);
    int a,b,n;
    cout<<"n=";
    cin>>n;
    cout<<"�ַ���Ϊ";
    if(n<0)
    {
        cout<<"-"<<" ";
        n=-n;
    }
    f(n);
    return 0;
}
void f(int n)
{
    int a;
    char t;
    if((n/10)!=0)
    {
        a=n/10;
        f(a);
    }
    t=n%10+48;
    cout<<t<<" ";
}
