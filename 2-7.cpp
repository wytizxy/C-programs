/* 1452210 1�� ֣��Զ */
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
/*����Ļ����ʾ10  12  19   41
i�������Σ�j�������Σ�m=����һ�ε�i+δ������j��n=�������ε�i+�������ε�j+m*/
