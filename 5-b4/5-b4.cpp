/*1452210 计算机1班 郑熙远*/
#include <iostream>

using namespace std;
int f();
int main()
{
    int a[50]={56,47,45,57,76,89,67,87,67,67,
    56,34,53,27,68,97,78,56,47,83,
    52,43,65,90,89,79,78,66,45,32,
    42,12,58,68,98,77,65,44,66,56,
    77,87,45,57,47,29,83,34,64,87};
    int i,j,t,x,p,q;
    x=1;
    for(i=0;i<49;i++)
        for(j=0;j<=49-i;j++)
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
    cout<<"成绩排列："<<endl;
    for(j=0;j<50;j++)
    {
        if(j!=0&&a[j]==a[j-1]&&a[j]!=a[j-2])
        {
            x=x-1;
            cout<<a[j]<<"    "<<x<<endl;
            x=x+1;
        }
        p=2;
        while(j!=0&&a[j]==a[j-p]&&p<=50)
        {

            q=50;
            while(q>0)
            {
                if(a[j]==a[j-q])
                {
                    x=x-q;
                    cout<<a[j]<<"    "<<x<<endl;
                    x=x+q;
                    break;
                }
                else
                {
                    q--;
                }
            }
            p++;
        }
        if(j==0||a[j]!=a[j-1])
            cout<<a[j]<<"    "<<x<<endl;
        x++;

    }
    return 0;
}
