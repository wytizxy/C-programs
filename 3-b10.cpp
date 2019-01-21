/*1452210 ¼ÆËã»ú1°à Ö£ÎõÔ¶*/
#include <iostream>

using namespace std;

int main()
{
    long double a,t,z;
    int b,c,d,e,f,g,h,i,j,k,l,m,n;
    cout<<"ÊäÈë"<<endl;
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
    cout<<"·Ö½â½á¹û"<<endl;
    cout<<"Ê®ÒÚÎ»:"<<b<<endl;
    cout<<"ÒÚÎ»  :"<<c<<endl;
    cout<<"Ç§ÍòÎ»:"<<d<<endl;
    cout<<"°ÙÍòÎ»:"<<e<<endl;
    cout<<"Ê®ÍòÎ»:"<<f<<endl;
    cout<<"ÍòÎ»  :"<<g<<endl;
    cout<<"Ç§Î»  :"<<h<<endl;
    cout<<"°ÙÎ»  :"<<i<<endl;
    cout<<"Ê®Î»  :"<<j<<endl;
    cout<<"Ô²    :"<<k<<endl;
    cout<<"½Ç    :"<<l<<endl;
    cout<<"·Ö    :"<<m<< endl;
    cout<<"´óÐ´  :";
    {
        if(b==1)
            cout<<"Ò¼";
        else if(b==2)
            cout<<"·¡";
        else if(b==3)
            cout<<"Èþ";
        else if(b==4)
            cout<<"ËÁ";
        else if(b==5)
            cout<<"Îé";
        else if(b==6)
            cout<<"Â½";
        else if(b==7)
            cout<<"Æâ";
        else if(b==8)
            cout<<"°Æ";
        else if(b==9)
            cout<<"¾Á";
    }
    {
        if(b!=0)
            cout<<"Ê°";
    }
    {
        if(c==1)
            cout<<"Ò¼";
        else if(c==2)
            cout<<"·¡";
        else if(c==3)
            cout<<"Èþ";
        else if(c==4)
            cout<<"ËÁ";
        else if(c==5)
            cout<<"Îé";
        else if(c==6)
            cout<<"Â½";
        else if(c==7)
            cout<<"Æâ";
        else if(c==8)
            cout<<"°Æ";
        else if(c==9)
            cout<<"¾Á";
    }
    {
        if(c!=0||b!=0)
            cout<<"ÒÚ";
    }
    {
        if(d==1)
            cout<<"Ò¼";
        else if(d==2)
            cout<<"·¡";
        else if(d==3)
            cout<<"Èþ";
        else if(d==4)
            cout<<"ËÁ";
        else if(d==5)
            cout<<"Îé";
        else if(d==6)
            cout<<"Â½";
        else if(d==7)
            cout<<"Æâ";
        else if(d==8)
            cout<<"°Æ";
        else if(d==9)
            cout<<"¾Á";
    }
    {
        if(d!=0)
            cout<<"Çª";
        else if(b!=0&&d==0&&e!=0)
            cout<<"Áã";
        else if(c!=0&&d==0&&e!=0)
            cout<<"Áã";
        else if(b!=0&&d==0&&e==0&&f!=0)
            cout<<"Áã";
        else if(c!=0&&d==0&&e==0&&f!=0)
            cout<<"Áã";
        else if(b!=0&&d==0&&e==0&&f==0&&g!=0)
            cout<<"Áã";
        else if(c!=0&&d==0&&e==0&&f==0&&g!=0)
            cout<<"Áã";
    }
    {
        if(e==1)
            cout<<"Ò¼";
        else if(e==2)
            cout<<"·¡";
        else if(e==3)
            cout<<"Èþ";
        else if(e==4)
            cout<<"ËÁ";
        else if(e==5)
            cout<<"Îé";
        else if(e==6)
            cout<<"Â½";
        else if(e==7)
            cout<<"Æâ";
        else if(e==8)
            cout<<"°Æ";
        else if(e==9)
            cout<<"¾Á";
    }
    {
        if(e!=0)
            cout<<"°Û";
        else if(d!=0&&e==0&&f!=0)
            cout<<"Áã";
        else if(d!=0&&e==0&&f==0&&g!=0)
            cout<<"Áã";
    }
    {
        if(f==1)
            cout<<"Ò¼";
        else if(f==2)
            cout<<"·¡";
        else if(f==3)
            cout<<"Èþ";
        else if(f==4)
            cout<<"ËÁ";
        else if(f==5)
            cout<<"Îé";
        else if(f==6)
            cout<<"Â½";
        else if(f==7)
            cout<<"Æâ";
        else if(f==8)
            cout<<"°Æ";
        else if(f==9)
            cout<<"¾Á";
    }
    {
        if(f!=0)
            cout<<"Ê°";
        else if(f==0&&e!=0&&g!=0)
            cout<<"Áã";
    }
    {
        if(g==1)
            cout<<"Ò¼";
        else if(g==2)
            cout<<"·¡";
        else if(g==3)
            cout<<"Èþ";
        else if(g==4)
            cout<<"ËÁ";
        else if(g==5)
            cout<<"Îé";
        else if(g==6)
            cout<<"Â½";
        else if(g==7)
            cout<<"Æâ";
        else if(g==8)
            cout<<"°Æ";
        else if(g==9)
            cout<<"¾Á";
    }
    {
        if(d!=0||e!=0||f!=0||g!=0)
            cout<<"Íò";
    }
    {
        if(h==1)
            cout<<"Ò¼";
        else if(h==2)
            cout<<"·¡";
        else if(h==3)
            cout<<"Èþ";
        else if(h==4)
            cout<<"ËÁ";
        else if(h==5)
            cout<<"Îé";
        else if(h==6)
            cout<<"Â½";
        else if(h==7)
            cout<<"Æâ";
        else if(h==8)
            cout<<"°Æ";
        else if(h==9)
            cout<<"¾Á";
    }
    {
        if(b!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(c!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(d!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(e!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(f!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(g!=0&&h==0&&i!=0)
            cout<<"Áã";
        else if(c!=0&&h==0&&i==0&&j!=0)
            cout<<"Áã";
        else if(d!=0&&h==0&&i==0&&j!=0)
            cout<<"Áã";
        else if(e!=0&&h==0&&i==0&&j!=0)
            cout<<"Áã";
        else if(f!=0&&h==0&&i==0&&j!=0)
            cout<<"Áã";
        else if(g!=0&&h==0&&i==0&&j!=0)
            cout<<"Áã";
        else if(c!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(d!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(e!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(f!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(g!=0&&h==0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(h!=0)
            cout<<"Çª";
    }
    {
        if(i==1)
            cout<<"Ò¼";
        else if(i==2)
            cout<<"·¡";
        else if(i==3)
            cout<<"Èþ";
        else if(i==4)
            cout<<"ËÁ";
        else if(i==5)
            cout<<"Îé";
        else if(i==6)
            cout<<"Â½";
        else if(i==7)
            cout<<"Æâ";
        else if(i==8)
            cout<<"°Æ";
        else if(i==9)
            cout<<"¾Á";
    }
    {
        if(h!=0&&i==0&&j!=0)
            cout<<"Áã";
        else if(h!=0&&i==0&&j==0&&k!=0)
            cout<<"Áã";
        else if(i!=0)
            cout<<"°Û";
    }
    {
        if(j==1)
            cout<<"Ò¼";
        else if(j==2)
            cout<<"·¡";
        else if(j==3)
            cout<<"Èþ";
        else if(j==4)
            cout<<"ËÁ";
        else if(j==5)
            cout<<"Îé";
        else if(j==6)
            cout<<"Â½";
        else if(j==7)
            cout<<"Æâ";
        else if(j==8)
            cout<<"°Æ";
        else if(j==9)
            cout<<"¾Á";
    }
    {
        if(i!=0&&j==0&&k!=0)
            cout<<"Áã";
        else if(j!=0)
            cout<<"Ê°";
    }
    {
        if(k==1)
            cout<<"Ò¼";
        else if(k==2)
            cout<<"·¡";
        else if(k==3)
            cout<<"Èþ";
        else if(k==4)
            cout<<"ËÁ";
        else if(k==5)
            cout<<"Îé";
        else if(k==6)
            cout<<"Â½";
        else if(k==7)
            cout<<"Æâ";
        else if(k==8)
            cout<<"°Æ";
        else if(k==9)
            cout<<"¾Á";
        else if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
            cout<<"Áã";
    }
    if(b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)
        cout<<"Ô²";
    if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
        cout<<"Ô²";
    {
        if(l==0&&m==0)
            cout<<"Õû";
    }
    {
        if(l==1)
            cout<<"Ò¼";
        else if(l==2)
            cout<<"·¡";
        else if(l==3)
            cout<<"Èþ";
        else if(l==4)
            cout<<"ËÁ";
        else if(l==5)
            cout<<"Îé";
        else if(l==6)
            cout<<"Â½";
        else if(l==7)
            cout<<"Æâ";
        else if(l==8)
            cout<<"°Æ";
        else if(l==9)
            cout<<"¾Á";
    }
    {
        if(l!=0)
            cout<<"½Ç";
        else if((b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)&&l==0&&m!=0)
            cout<<"Áã";
    }
    {
        if(l!=0&&m==0)
            cout<<"Õû";
    }
    {
        if(m==1)
            cout<<"Ò¼";
        else if(m==2)
            cout<<"·¡";
        else if(m==3)
            cout<<"Èþ";
        else if(m==4)
            cout<<"ËÁ";
        else if(m==5)
            cout<<"Îé";
        else if(m==6)
            cout<<"Â½";
        else if(m==7)
            cout<<"Æâ";
        else if(m==8)
            cout<<"°Æ";
        else if(m==9)
            cout<<"¾Á";
    }
    {
        if(m!=0)
            cout<<"·Ö";
    }
    return 0;
}

