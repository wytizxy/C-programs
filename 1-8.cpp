/* 1452210 1班 郑熙远 */
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    cout<<"a+b="<<a+b;
    return 0;
}
/*错误原因：
  没有a,b的输入语言
  没有声明变量c
  输出语言字符打成了>>应该是<<*/
