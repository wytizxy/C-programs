/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    cin>>a;
    b=1;
    c=1;
    t=0;
    if(a<=1000)
    while(a%b==0&&b<a)
    {
        t+=b;
        b++;
    }
    if(a==t)
    {
        cout<<a<<","<<"its factors are ";
        while(a%c==0&&c<a)
        {
            cout<<c<<",";
            c++;
        }
    }


    return 0;
}
