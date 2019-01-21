/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int min(int a=2147483648,int b=2147483648,int c=2147483648,int d=2147483648);
int main()
{
    int a,b,c,d,t,x;
    cin>>t;
    if(t==2)
    {
        cin>>a>>b;
        x=min(a,b);
        cout<<x;
    }
    else if(t==3)
    {
        cin>>a>>b>>c;
        x=min(a,b,c);
        cout<<x;
    }
    else if(t==4)
    {
        cin>>a>>b>>c>>d;
        x=min(a,b,c,d);
        cout<<x;
    }


    return 0;
}
int min(int a,int b,int c,int d)
{
    if(a>b)
    {
        a=b;
        if(a>c)
        {
            a=c;
            if(a>d)
            {
                a=d;
            }
        }
    }
    return a;
}
