/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float F,c;
    cout<<"请在输入华氏度后轻击回车以完成运算。"<<endl;
    cout<<"华氏度F=";
    cin>>F;
    c=(F-32)*5/9;
    cout << "摄氏度c="<<setiosflags(ios::fixed)<<setprecision(2)<<c << endl;
    return 0;
}
