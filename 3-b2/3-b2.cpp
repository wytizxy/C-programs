/* 1452210 �����1�� ֣��Զ */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "����";
    int a,b,c,d,e,f;
    cin>>a;
    cout<<"��λ��";
    b=a/10000;
    cout<<b<<endl;
    cout<<"ǧλ��";
    c=(a-10000*b)/1000;
    cout<<c<<endl;
    cout<<"��λ��";
    d=(a-1000*c-10000*b)/100;
    cout<<d<<endl;
    cout<<"ʮλ��";
    e=(a-d*100-1000*c-10000*b)/10;
    cout<<e<<endl;
    cout<<"��λ��";
    f=(a-e*10-d*100-1000*c-10000*b);
    cout<<f<<endl;


    return 0;
}
