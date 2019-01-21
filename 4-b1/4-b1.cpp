/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;
int main()
{
    void f(int);
    int n,x;
    cout<<"n=";
    cin>>n;
    cout<<"×Ö·û´®Îª";
    x=n;
    if(n<0)
    {
        n=-n;
    }
    f(n);
    if(x<0)
    {
        cout<<"-";
    }
    return 0;
}
void f(int n)
{
    int a;
    char t;
    t=n%10+48;
    cout<<t<<" ";
    if((n/10)!=0)
    {
        a=n/10;
        f(a);
    }
}
