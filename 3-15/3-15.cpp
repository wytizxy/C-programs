/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"�����������������Իس������"<<endl;
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
    cout<<"��С������Ϊ"<<a<<endl;
    cout<<"���Լ��Ϊ"<<b<<endl;
    return 0;
}
