/* 1452210 计算机1班 郑熙远 */
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "输入";
    int a,b,c,d,e,f;
    cin>>a;
    cout<<"万位：";
    b=a/10000;
    cout<<b<<endl;
    cout<<"千位：";
    c=(a-10000*b)/1000;
    cout<<c<<endl;
    cout<<"百位：";
    d=(a-1000*c-10000*b)/100;
    cout<<d<<endl;
    cout<<"十位：";
    e=(a-d*100-1000*c-10000*b)/10;
    cout<<e<<endl;
    cout<<"个位：";
    f=(a-e*10-d*100-1000*c-10000*b);
    cout<<f<<endl;


    return 0;
}
