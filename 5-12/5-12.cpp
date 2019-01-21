/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    char a[]={'I',' ','l','o','v','e',' ','u',',','C','+','+','\0'};
    cout<<a<<endl;
    int t;
    for(t=0;t<=12;t++)
    {
        if(a[t]==32)
        {
            a[t]=a[t];
        }
        else if(a[t]>=65&&a[t]<=90)
        {
            a[t]=26-(a[t]-64)+1+64;
        }
        else if(a[t]>=97&&a[t]<=122)
        {
            a[t]=26-(a[t]-96)+1+96;
        }
    }
    cout<<a;
    return 0;
}
