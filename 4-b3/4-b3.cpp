/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;
int f(int num,int base);
int is_power(int num,int base);
int main()
{
    int num,base,t;
    cout<<"num=";
    cin>>num;
    while(num<=0)
    {
        cout<<"������������������"<<endl;
        cout<<"num=";
        cin>>num;
    }
    cout<<"base=";
    cin>>base;
    while(base<=0)
    {
        cout<<"������������������"<<endl;
        cout<<"base=";
        cin>>base;
    }
    if(num==1)
    {
        t=1;
    }
    else
    {
        if(base==1)
        {
            t=0;
        }
        else
        {
            t=is_power(num,base);
        }
    }
    cout<<"���ؽ��"<<t;
    return 0;
}
int is_power(int num,int base)
{
    int k;
    if(num%base==0)
    {
        k=f(num,base);
    }
    else
    {
        k=0;
    }
    return k;
}
int f(int num,int base)
{

    int t;
    if(num>=base)
    {
        if(num%base==0)
        {
            num=num/base;
            t=f(num,base);
        }
        else
        {
            t=0;
        }
    }
    else
    {
        if(num==1)
        {
            t=1;
        }
        else
        {
            t=0;
        }
    }
    return t;
}
