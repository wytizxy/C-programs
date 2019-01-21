/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float t=3.14159;
    float r=1.5,h=3;
    float a,b,c,d,e;
    a=2*t*r;
    b=t*r*r;
    c=4*t*r*r;
    d=4/3*t*r*r*r;
    e=b*h;
    cout<< "圆半径为"<<r<<' '<<"圆柱的高为"<<h<<endl;
    cout<<"圆的周长=" <<setiosflags(ios::fixed)<<setprecision(2)<< a <<endl;
    cout<<"圆的面积=" <<setiosflags(ios::fixed)<<setprecision(2)<< b <<endl;
    cout<<"球的表面积="<<setiosflags(ios::fixed)<<setprecision(2)<< c <<endl;
    cout<<"球的体积="<<setiosflags(ios::fixed)<<setprecision(2)<< d <<endl;
    cout<<"圆柱的体积="<<setiosflags(ios::fixed)<<setprecision(2)<< e <<endl;
    return 0;
}
