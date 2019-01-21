/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    int a[100];
    int t,x,p;
    for(t=0;t<=99;t++)
    {
        a[t]=t+1;
        for(x=1,p=0;x<=100;x++)
            if(a[t]%x==0)
            {
                p++;
            }
            if(p%2!=0)
            {
                cout<<a[t]<<" ";
            }

    }
    return 0;
}
