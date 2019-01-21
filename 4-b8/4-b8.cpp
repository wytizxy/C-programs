/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int max(int a,int b);
int max(int a,int b,int c);
int max(int a,int b,int c,int d);
int main()
{
    int a,b,c,d,t,x;
    cin>>t;
    if(t==2)
    {
        cin>>a>>b;
        x=max(a,b);
        cout<<x;
    }
    else if(t==3)
    {
        cin>>a>>b>>c;
        x=max(a,b,c);
        cout<<x;
    }
    else if(t==4)
    {
        cin>>a>>b>>c>>d;
        x=max(a,b,c,d);
        cout<<x;
    }


    return 0;
}
int max(int a,int b)
{
    if(a<b)
    {
        a=b;
    }
    return a;
}
int max(int a,int b,int c)
{
    if(a<b)
    {
        a=b;
        if(a<c)
        {
            a=c;
        }
    }
    return a;
}
int max(int a,int b,int c,int d)
{
    if(a<b)
    {
        a=b;
        if(a<c)
        {
            a=c;
            if(a<d)
            {
                a=d;
            }
        }
    }
    return a;
}
