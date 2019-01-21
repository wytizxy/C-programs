/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int p,q;
    int a[10][10];
    for(p=0;p<=10;p++)
    {
        a[p][p]=1;
        a[p][0]=1;
    }
    for(p=2;p<10;p++)
    {
        for(q=1;q<p;q++)
        {
            a[p][q]=a[p-1][q-1]+a[p-1][q];
        }
    }
    p=0;
    cout<<"                  ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=1;
    cout<<"                ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=2;
    cout<<"              ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=3;
    cout<<"            ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=4;
    cout<<"          ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=5;
    cout<<"        ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=6;
    cout<<"      ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=7;
    cout<<"    ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=8;
    cout<<"  ";
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    p=9;
    for(q=0;q<=p;q++)
    {
        cout<<setw(3)<<a[p][q]<<" ";
    }
    cout<<endl;
    return 0;
}
