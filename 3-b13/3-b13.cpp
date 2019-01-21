/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,t;
    a=123;
    b=456;
    c=789;
    t=a+b+c;
    while(t!=1953)
    {
        a++;
        t=a+b+c;
        while(t!=1953)
        {
            b++;
            t=a+b+c;
            while(t!=1953)
            {
                c++;
                t=a+b+c;
                if(t==1953)
                    cout<<a<<"+"<<b<<"+"<<c<<"="<<t<<endl;
            }
            if(t==1953)
                    cout<<a<<"+"<<b<<"+"<<c<<"="<<t<<endl;
        }
        if(t==1953)
                    cout<<a<<"+"<<b<<"+"<<c<<"="<<t<<endl;
    }
    if(t==1953)
                    cout<<a<<"+"<<b<<"+"<<c<<"="<<t<<endl;
    return 0;
}
/*老师，这题我做了好久实在还是不明白，只能交一个失败作品了。。*/
