/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    char a[10][20];
    int b[10];
    int c[10];
    int x;
    cout<<"姓名:";
    cin>>a[0];
    cout<<"学号:";
    cin>>b[0];
    cout<<"成绩:";
    cin>>c[0];
    cout<<"姓名:";
    cin>>a[1];
    cout<<"学号:";
    cin>>b[1];
    cout<<"成绩:";
    cin>>c[1];
    cout<<"姓名:";
    cin>>a[2];
    cout<<"学号:";
    cin>>b[2];
    cout<<"成绩:";
    cin>>c[2];
    cout<<"姓名:";
    cin>>a[3];
    cout<<"学号:";
    cin>>b[3];
    cout<<"成绩:";
    cin>>c[3];
    cout<<"姓名:";
    cin>>a[4];
    cout<<"学号:";
    cin>>b[4];
    cout<<"成绩:";
    cin>>c[4];
    cout<<"姓名:";
    cin>>a[5];
    cout<<"学号:";
    cin>>b[5];
    cout<<"成绩:";
    cin>>c[5];
    cout<<"姓名:";
    cin>>a[6];
    cout<<"学号:";
    cin>>b[6];
    cout<<"成绩:";
    cin>>c[6];
    cout<<"姓名:";
    cin>>a[7];
    cout<<"学号:";
    cin>>b[7];
    cout<<"成绩:";
    cin>>c[7];
    cout<<"姓名:";
    cin>>a[8];
    cout<<"学号:";
    cin>>b[8];
    cout<<"成绩:";
    cin>>c[8];
    cout<<"姓名:";
    cin>>a[9];
    cout<<"学号:";
    cin>>b[9];
    cout<<"成绩:";
    cin>>c[9];
    cout<<"不及格同学有"<<endl<<endl;
    for(x=0;x<=9;x++)
    {
        if(c[x]<=59)
        {
            cout<<"姓名:"<<a[x]<<endl;
            cout<<"学号:"<<b[x]<<endl;
            cout<<"成绩:"<<c[x]<<endl;
        }
    }

    return 0;
}
