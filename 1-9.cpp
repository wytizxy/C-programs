/* 1452210 1班 郑熙远 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    int add(int x,int y);
    cin>>a>>b;
    c=add(a,b);
    cout<<"a+b="<<c<<endl;
    return 0;
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}
/*return拼写错误
c=add(a,b)没打"；"且没赋值a,b
没有定义变量c,z，add算法
定义add时第一行不应有“；”*/
