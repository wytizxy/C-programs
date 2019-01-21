/*1452210 计算机1班 郑熙远*/
#include <iostream>
using namespace std;

/* 可根据需要添加相应的内容 */

/* 不允许对本函数做任何修改
   除本函数外，不允许任何函数中输出“零”-“玖”!!!!!! */
void daxie(int num, int flag_of_zero)
{
	switch(num) {
		case 0:
			if (flag_of_zero)
				cout << "零";
			break;
		case 1:
			cout << "壹";
			break;
		case 2:
			cout << "贰";
			break;
		case 3:
			cout << "叁";
			break;
		case 4:
			cout << "肆";
			break;
		case 5:
			cout << "伍";
			break;
		case 6:
			cout << "陆";
			break;
		case 7:
			cout << "柒";
			break;
		case 8:
			cout << "捌";
			break;
		case 9:
			cout << "玖";
			break;
		default:
			cout << "error";
			break;
		}
}

/* 可根据需要自定义其它函数 */


/* 根据需要完成main函数 */
main()
{
	long double a,t,z;
    int b,c,d,e,f,g,h,i,j,k,l,m,n;
    cout<<"输入"<<endl;
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
    cout<<"分解结果"<<endl;
    cout<<"十亿位:"<<b<<endl;
    cout<<"亿位  :"<<c<<endl;
    cout<<"千万位:"<<d<<endl;
    cout<<"百万位:"<<e<<endl;
    cout<<"十万位:"<<f<<endl;
    cout<<"万位  :"<<g<<endl;
    cout<<"千位  :"<<h<<endl;
    cout<<"百位  :"<<i<<endl;
    cout<<"十位  :"<<j<<endl;
    cout<<"圆    :"<<k<<endl;
    cout<<"角    :"<<l<<endl;
    cout<<"分    :"<<m<< endl;
    cout<<"大写  :";
    {
        daxie(b,0);
    }
    {
        if(b!=0)
            cout<<"拾";
    }
    {
        daxie(c,0);
    }
    {
        if(c!=0||b!=0)
            cout<<"亿";
    }
    {
        if((c!=0&&d==0&&e==0&&f==0&&g!=0)||(b!=0&&d==0&&e==0&&f==0&&g!=0)||(c!=0&&d==0&&e==0&&f!=0)||(b!=0&&d==0&&e==0&&f!=0)||(c!=0&&d==0&&e!=0)||(b!=0&&d==0&&e!=0))
        {
            daxie(d,1);
        }
        else
        {
            daxie(d,0);
        }
    }
    {
        if(d!=0)
            cout<<"仟";
    }
    {
        if((d!=0&&e==0&&f!=0)||(d!=0&&e==0&&f==0&&g!=0))
        {
            daxie(e,1);
        }
        else
        {
            daxie(e,0);
        }
    }
    {
        if(e!=0)
            cout<<"佰";
    }
    {
        if(f==0&&e!=0&&g!=0)
        {
            daxie(f,1);
        }
        else
        {
            daxie(f,0);
        }
    }
    {
        if(f!=0)
            cout<<"拾";

    }
    {
           daxie(g,0);
    }
    {
        if(d!=0||e!=0||f!=0||g!=0)
            cout<<"万";
    }
    {
        if((b!=0&&h==0&&i!=0)||(c!=0&&h==0&&i!=0)||(d!=0&&h==0&&i!=0)||(e!=0&&h==0&&i!=0)||(f!=0&&h==0&&i!=0)||(g!=0&&h==0&&i!=0)||(c!=0&&h==0&&i==0&&j!=0)||(d!=0&&h==0&&i==0&&j!=0)||(e!=0&&h==0&&i==0&&j!=0)||(f!=0&&h==0&&i==0&&j!=0)||(g!=0&&h==0&&i==0&&j!=0)||(c!=0&&h==0&&i==0&&j==0&&k!=0)||(d!=0&&h==0&&i==0&&j==0&&k!=0)||(e!=0&&h==0&&i==0&&j==0&&k!=0)||(f!=0&&h==0&&i==0&&j==0&&k!=0)||(g!=0&&h==0&&i==0&&j==0&&k!=0))
        {
            daxie(h,1);
        }
        else
        {
            daxie(h,0);
        }
    }
    {
        if(h!=0)
            cout<<"仟";
    }
    {
        if((h!=0&&i==0&&j!=0)||(h!=0&&i==0&&j==0&&k!=0))
        {
            daxie(i,1);
        }
        else
        {
            daxie(i,0);
        }
    }
    {
        if(i!=0)
            cout<<"佰";
    }
    {
       if(i!=0&&j==0&&k!=0)
       {
           daxie(j,1);
       }
       else
       {
           daxie(j,0);
       }
    }
    {

        if(j!=0)
            cout<<"拾";
    }
    {
        if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
        {
            daxie(k,1);
        }
        else
        {
            daxie(k,0);
        }
    }
    if(b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)
        cout<<"圆";
    if(b==0&&c==0&&d==0&&e==0&&f==0&&g==0&&h==0&&i==0&&j==0&&k==0&&l==0&&m==0)
        cout<<"圆";
    {
        if(l==0&&m==0)
            cout<<"整";
    }
    {
        if((b!=0||c!=0||d!=0||e!=0||f!=0||g!=0||h!=0||i!=0||j!=0||k!=0)&&l==0&&m!=0)
        {
            daxie(l,1);
        }
        else
        {
            daxie(l,0);
        }
    }
    {
        if(l!=0)
            cout<<"角";
    }
    {
        if(l!=0&&m==0)
            cout<<"整";
    }
    {
        daxie(m,0);
    }
    {
        if(m!=0)
            cout<<"分";
    }
	return 0;
}
