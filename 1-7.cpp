/* 1452210 1班 郑熙远 */
#include <iostream>

using namespace std;

int main()
{
   int a,b,c;
   int f(int x,int y,int z);
   cin>>a>>b>>c;
   c=f(a,b,c);
   cout<<c<<endl;
    return 0;
}
int f(int x,int y,int z)
{
    int m;
    if(x<y)m=x;
    else m=y;
    if(z<m)m=z;
    return(m);
}
/*程序的运行结果是：
  在屏幕上显示输入的三个数中最小的数*/
