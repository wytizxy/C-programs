/*1452210 �����1�� ֣��Զ*/
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
        cout<<"������������������"<<endl;
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
