/*1452210 �����1�� ֣��Զ*/
#include <iostream>

using namespace std;

int main()
{
    long double a,t,z;
    int b,c,d,e,f,g,h,i,j,k,l,m,n;
    cout<<"����"<<endl;
    cin>>z;
    t=z+0.001;
    a=t/10;

    b=a/100000000;
    c=(a-100000000*b)/10000000;
    d=(a-100000000*b-10000000*c)/1000000;
    e=(a-100000000*b-10000000*c-1000000*d)/100000;
    f=(a-100000000*b-10000000*c-1000000*d-100000*e)/10000;
    g=(a-100000000*b-10000000*c-1000000*d-100000*e-10000*f)/1000;
    h=(a-100000000*b-10000000*c-1000000*d-100000*e-10000*f-1000*g)/100;
    i=(a-100000000*b-10000000*c-1000000*d-100000*e-10000*f-1000*g-100*h)/10;
    n=(a-100000000*b-10000000*c-1000000*d-100000*e-10000*f-1000*g-100*h-10*i)*100000;
    j=n/100000;
    k=(n-j*100000)/10000;
    l=(n-j*100000-k*10000)/1000;
    m=(n-j*100000-k*10000-l*1000)/100;
    cout<<"�ֽ���"<<endl;
    cout<<"ʮ��λ:"<<b<<endl;
    cout<<"��λ  :"<<c<<endl;
    cout<<"ǧ��λ:"<<d<<endl;
    cout<<"����λ:"<<e<<endl;
    cout<<"ʮ��λ:"<<f<<endl;
    cout<<"��λ  :"<<g<<endl;
    cout<<"ǧλ  :"<<h<<endl;
    cout<<"��λ  :"<<i<<endl;
    cout<<"ʮλ  :"<<j<<endl;
    cout<<"Բ    :"<<k<<endl;
    cout<<"��    :"<<l<<endl;
    cout<<"��    :"<<m<< endl;
    cout<<"��д  :";
    {
        if(b==1)
            cout<<"Ҽ";
        else if(b==2)
            cout<<"��";
        else if(b==3)
            cout<<"��";
        else if(b==4)
            cout<<"��";
        else if(b==5)
            cout<<"��";
        else if(b==6)
            cout<<"½";
        else if(b==7)
            cout<<"��";
        else if(b==8)
            cout<<"��";
        else if(b==9)
            cout<<"��";
    }
    {
        if(b!=0)
            cout<<"ʰ";
    }
    {
        if(c==1)
            cout<<"Ҽ";
        else if(c==2)
            cout<<"��";
        else if(c==3)
            cout<<"��";
        else if(c==4)
            cout<<"��";
        else if(c==5)
            cout<<"��";
        else if(c==6)
            cout<<"½";
        else if(c==7)
            cout<<"��";
        else if(c==8)
            cout<<"��";
        else if(c==9)
            cout<<"��";
    }
    {
        if(c!=0||b!=0)
            cout<<"��";
    }
    {
        if(d==1)
            cout<<"Ҽ";
        else if(d==2)
            cout<<"��";
        else if(d==3)
            cout<<"��";
        else if(d==4)
            cout<<"��";
        else if(d==5)
            cout<<"��";
        else if(d==6)
            cout<<"½";
        else if(d==7)
            cout<<"��";
        else if(d==8)
            cout<<"��";
        else if(d==9)
            cout<<"��";
    }
    {
        if(d!=0)
            cout<<"Ǫ";
        else if(b!=0&&d==0&&e!=0)
            cout<<"��";
        else if(c!=0&&d==0&&e!=0)
            cout<<"��";
        else if(b!=0&&d==0&&e==0&&f!=0)
            cout<<"��";
        else if(c!=0&&d==0&&e==0&&f!=0)
            cout<<"��";
        else if(b!=0&&d==0&&e==0&&f==0&&g!=0)
            cout<<"��";
        else if(c!=0&&d==0&&e==0&&f==0&&g!=0)
            cout<<"��";
    }
    {
        if(e==1)
            cout<<"Ҽ";
        else if(e==2)
            cout<<"��";
        else if(e==3)
            cout<<"��";
        else if(e==4)
            cout<<"��";
        else if(e==5)
            cout<<"��";
        else if(e==6)
            cout<<"½";
        else if(e==7)
            cout<<"��";
        else if(e==8)
            cout<<"��";
        else if(e==9)
            cout<<"��";
    }
    {
        if(e!=0)
            cout<<"��";
        else if(d!=0&&e==0&&f!=0)
            cout<<"��";
        else if(d!=0&&e==0&&f==0&&g!=0)
            cout<<"��";
    }
    {
        if(f==1)
            cout<<"Ҽ";
        else if(f==2)
            cout<<"��";
        else if(f==3)
            cout<<"��";
        else if(f==4)
            cout<<"��";
        else if(f==5)
            cout<<"��";
        else if(f==6)
            cout<<"½";
        else if(f==7)
            cout<<"��";
        else if(f==8)
            cout<<"��";
        else if(f==9)
            cout<<"��";
    }
    {
        if(f!=0)
            cout<<"ʰ";
        else if(f==0&&e!=0&&g!=0)
            cout<<"��";
    }
    {
        if(g==1)
            cout<<"Ҽ";
        else if(g==2)
            cout<<"��";
        else if(g==3)
            cout<<"��";
        else if(g==4)
            cout<<"��";
        else if(g==5)
            cout<<"��";
        else if(g==6)
            cout<<"½";
        else if(g==7)
            cout<<"��";
        else if(g==8)
            cout<<"��";
        else if(g==9)
            cout<<"��";
    }
    {
        if(d!=0||e!=0||f!=0||g!=0)
            cout<<"��";
    }
    {
        if(h==1)
            cout<<"Ҽ";
        else if(h==2)
            cout<<"��";
        else if(h==3)
            cout<<"��";
        else if(h==4)
            cout<<"��";
        else if(h==5)
            cout<<"��";
        else if(h==6)
            cout<<"½";
        else if(h==7)
            cout<<"��";
        else if(h==8)
            cout<<"��";
        else if(h==9)
            cout<<"��";
    }
    {
        if(b!=0&&h==0&&i!=0)
            cout<<"��";
        else if(c!=0&&h==0&&i!=0)
            cout<<"��";
        else if(d!=0&&h==0&&i!=0)
            cout<<"��";
        else if(e!=0&&h==0&&i!=0)
            cout<<"��";
        else if(f!=0&&h==0&&i!=0)
            cout<<"��";
        else if(g!=0&&h==0&&i!=0)
            cout<<"��";
        else if(c!=0&&h==0&&i==0&&j!=0)
            cout<<"��";
        else if(d!=0&&h==0&&i==0&&j!=0)
            cout<<"��";
        else if(e!=0&&h==0&&i==0&&j!=0)
            cout<<"��";
        else if(f!=0&&h==0&&i==0&&j!=0)
            cout<<"��";
        else if(g!=0&&h==0&&i==0&&j!=0)
            cout<<"��";
        else if(c!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(d!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(e!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(f!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(g!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(h!=0)
            cout<<"Ǫ";
    }
    {
        if(i==1)
            cout<<"Ҽ";
        else if(i==2)
            cout<<"��";
        else if(i==3)
            cout<<"��";
        else if(i==4)
            cout<<"��";
        else if(i==5)
            cout<<"��";
        else if(i==6)
            cout<<"½";
        else if(i==7)
            cout<<"��";
        else if(i==8)
            cout<<"��";
        else if(i==9)
            cout<<"��";
    }
    {
        if(h!=0&&i==0&&j!=0)
            cout<<"��";
        else if(h!=0&&i==0&&j==0&&k!=0)
            cout<<"��";
        else if(i!=0)
            cout<<"��";
    }
    {
        if(j==1)
            cout<<"Ҽ";
        else if(j==2)
            cout<<"��";
        else if(j==3)
            cout<<"��";
        else if(j==4)
            cout<<"��";
        else if(j==5)
            cout<<"��";
        else if(j==6)
            cout<<"½";
        else if(j==7)
            cout<<"��";
        else if(j==8)
            cout<<"��";
        else if(j==9)
            cout<<"��";
    }
    {
        if(i!=0&&j==0&&k!=0)
            cout<<"��";
        else if(j!=0)
            cout<<"ʰ";
    }
    {
        if(k==1)
            cout<<"Ҽ";
        else if(k==2)
            cout<<"��";
        else if(k==3)
            cout<<"��";
        else if(k==4)
            cout<<"��";
        else if(k==5)
            cout<<"��";
        else if(k==6)
            cout<<"½";
        else if(k==7)
            cout<<"��";
        else if(k==8)
            cout<<"��";
        else if(k==9)
            cout<<"��";
        else if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
            cout<<"��";
    }
    if(b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)
        cout<<"Բ";
    if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
        cout<<"Բ";
    {
        if(l==0&&m==0)
            cout<<"��";
    }
    {
        if(l==1)
            cout<<"Ҽ";
        else if(l==2)
            cout<<"��";
        else if(l==3)
            cout<<"��";
        else if(l==4)
            cout<<"��";
        else if(l==5)
            cout<<"��";
        else if(l==6)
            cout<<"½";
        else if(l==7)
            cout<<"��";
        else if(l==8)
            cout<<"��";
        else if(l==9)
            cout<<"��";
    }
    {
        if(l!=0)
            cout<<"��";
        else if((b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)&&l==0&&m!=0)
            cout<<"��";
    }
    {
        if(l!=0&&m==0)
            cout<<"��";
    }
    {
        if(m==1)
            cout<<"Ҽ";
        else if(m==2)
            cout<<"��";
        else if(m==3)
            cout<<"��";
        else if(m==4)
            cout<<"��";
        else if(m==5)
            cout<<"��";
        else if(m==6)
            cout<<"½";
        else if(m==7)
            cout<<"��";
        else if(m==8)
            cout<<"��";
        else if(m==9)
            cout<<"��";
    }
    {
        if(m!=0)
            cout<<"��";
    }
    return 0;
}

