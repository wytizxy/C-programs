/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    double x,a,t,x1,n;
    cout<<"x=";
    cin>>x;
    a=1;
    x1=1;
    n=1;
    t=0;
    do
    {
        t=t+x1;
        x1=x1*x/n;
        n++;
    }
    while(x1>=1e-6);
    cout<<"e^x="<<t;
    return 0;
}
