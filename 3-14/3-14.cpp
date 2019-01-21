/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    cout<<"输入四个整数（输入每个整数之间以回车间隔）"<<endl;
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<"四个整数由小到大排序："<<endl;
    if(a<b&&b<c&&c<d)
        cout<<a<<'\0'<<b<<'\0'<<c<<'\0'<<d<<'\0'<<endl;
    else if(a<b&&b<d&&d<c)
        cout<<a<<'\0'<<b<<'\0'<<d<<'\0'<<c<<'\0'<<endl;
    else if(a<c&&c<b&&b<d)
        cout<<a<<'\0'<<c<<'\0'<<b<<'\0'<<d<<'\0'<<endl;
    else if(a<c&&c<d&&d<b)
        cout<<a<<'\0'<<c<<'\0'<<d<<'\0'<<b<<'\0'<<endl;
    else if(a<d&&d<b&&b<c)
        cout<<a<<'\0'<<d<<'\0'<<b<<'\0'<<c<<'\0'<<endl;
    else if(a<d&&d<c&&c<b)
        cout<<a<<'\0'<<d<<'\0'<<c<<'\0'<<b<<'\0'<<endl;
    else if(b<a&&a<c&&c<d)
        cout<<b<<'\0'<<a<<'\0'<<c<<'\0'<<d<<'\0'<<endl;
    else if(b<a&&a<d&&d<c)
        cout<<b<<'\0'<<a<<'\0'<<d<<'\0'<<c<<'\0'<<endl;
    else if(b<c&&c<a&&a<d)
        cout<<b<<'\0'<<c<<'\0'<<a<<'\0'<<d<<'\0'<<endl;
    else if(b<c&&c<d&&d<a)
        cout<<b<<'\0'<<c<<'\0'<<d<<'\0'<<a<<'\0'<<endl;
    else if(b<d&&d<a&&a<c)
        cout<<b<<'\0'<<d<<'\0'<<a<<'\0'<<c<<'\0'<<endl;
    else if(b<d&&d<c&&c<a)
        cout<<b<<'\0'<<d<<'\0'<<c<<'\0'<<a<<'\0'<<endl;
    else if(c<a&&a<b&&b<d)
        cout<<c<<'\0'<<a<<'\0'<<b<<'\0'<<d<<'\0'<<endl;
    else if(c<a&&a<d&&d<b)
        cout<<c<<'\0'<<a<<'\0'<<d<<'\0'<<b<<'\0'<<endl;
    else if(c<b&&b<a&&a<d)
        cout<<c<<'\0'<<b<<'\0'<<a<<'\0'<<d<<'\0'<<endl;
    else if(c<b&&b<d&&d<a)
        cout<<c<<'\0'<<b<<'\0'<<d<<'\0'<<a<<'\0'<<endl;
    else if(c<d&&d<a&&a<b)
        cout<<c<<'\0'<<d<<'\0'<<a<<'\0'<<b<<'\0'<<endl;
    else if(c<d&&d<b&&b<a)
        cout<<c<<'\0'<<d<<'\0'<<b<<'\0'<<a<<'\0'<<endl;
    else if(d<a&&a<b&&b<c)
        cout<<d<<'\0'<<a<<'\0'<<b<<'\0'<<c<<'\0'<<endl;
    else if(d<a&&a<c&&c<b)
        cout<<d<<'\0'<<a<<'\0'<<c<<'\0'<<b<<'\0'<<endl;
    else if(d<b&&b<a&&a<c)
        cout<<d<<'\0'<<b<<'\0'<<a<<'\0'<<c<<'\0'<<endl;
    else if(d<b&&b<c&&c<a)
        cout<<d<<'\0'<<b<<'\0'<<c<<'\0'<<a<<'\0'<<endl;
    else if(d<c&&c<a&&a<b)
        cout<<d<<'\0'<<c<<'\0'<<a<<'\0'<<b<<'\0'<<endl;
    else if(d<c&&c<b&&b<a)
        cout<<d<<'\0'<<c<<'\0'<<b<<'\0'<<a<<'\0'<<endl;

    return 0;
}
