/* 1452210 1班 郑熙远 */
#include <iostream>

using namespace std;

int main()
{
    int i,j,m,n;
    i=8;
    j=10;
    m=++i+j++;
    n=(++i)+(++j)+m;
    cout<<i<<'\t'<<j<<'\t'<<m<<'\t'<<n<<endl;
    return 0;
}
/*在屏幕上显示10  12  19   41
i自增两次，j自增两次，m=自增一次的i+未自增的j，n=自增两次的i+自增两次的j+m*/
