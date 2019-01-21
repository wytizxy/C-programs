/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;
int p(int,int);
int main()
{
    int n,k;
    double x;
    cout<<"x=";
    cin>>x;
    cout<<"n=";
    cin>>n;
    while(n<0)
    {
        cout<<"输入错误，请重新输入"<<endl;
        cout<<"n=";
        cin>>n;
    }
    k=p(n,x);
    cout<<"Pn(x)="<<k;
    return 0;
}
int p(int n,int x)
{
    int k,l,m,y,z;
    if(n==0)
    {
        k=1;
    }
    if(n==1)
    {
        k=x;
    }
    if(n>=1)
    {
        l=2*n-1;
        m=n-1;
        y=p(n-1,x);
        z=p(n-2,x);
        k=(l*x*y-m*z)/n;
    }
    return k;

}
