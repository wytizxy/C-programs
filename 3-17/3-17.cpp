/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    int a,n,Sn,m,k;
    cout<<"a=";
    cin>>a;
    cout<<"n=";
    cin>>n;
    m=1;
    Sn=0;
    k=a;
    while(m<=n)
    {
        Sn+=k;
        k=10*k+a;
        m++;
    }
    cout<<"Sn="<<Sn<<endl;
    return 0;
}
