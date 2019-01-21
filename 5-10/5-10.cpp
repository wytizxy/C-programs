/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    char a1[80],a2[80],a3[80];
    cout<<"输入第一行文字（不多于80个字符）";
    gets(a1);
    cout<<"输入第二行文字（不多于80个字符）";
    gets(a2);
    cout<<"输入第三行文字（不多于80个字符）";
    gets(a3);
    int w,t,dx=0,xx=0,sz=0,kg=0,qt=0;
    for(t=0;t<=79&&a1[t]!='\0';t++)
    {
        if(65<=a1[t]&&a1[t]<=90)
        {
            dx++;
        }
        else if(a1[t]>=97&&a1[t]<=122)
        {
            xx++;
        }
        else if(a1[t]>=48&&a1[t]<=57)
        {
            sz++;
        }
        else if(a1[t]==32)
        {
            kg++;
        }
        else
        {
            qt++;
        }
    }
    cout<<"第一行文字中英文大写字母数量："<<dx<<" 小写字母数量："<<xx<<"数字数量："<<sz<<"空格数量："<<kg<<"其他字符数量："<<qt<<endl;
    dx=0;
    xx=0;
    sz=0;
    kg=0;
    qt=0;
    for(t=0;t<=79&&a2[t]!='\0';t++)
    {
        if(65<=a2[t]&&a2[t]<=90)
        {
            dx++;
        }
        else if(a2[t]>=97&&a2[t]<=122)
        {
            xx++;
        }
        else if(a2[t]>=48&&a2[t]<=57)
        {
            sz++;
        }
        else if(a2[t]==32)
        {
            kg++;
        }
        else
        {
            qt++;
        }
    }
    cout<<"第二行文字中英文大写字母数量："<<dx<<" 小写字母数量："<<xx<<"数字数量："<<sz<<"空格数量："<<kg<<"其他字符数量："<<qt<<endl;
    dx=0;
    xx=0;
    sz=0;
    kg=0;
    qt=0;
    for(t=0;t<=79&&a3[t]!='\0';t++)
    {
        if(65<=a3[t]&&a3[t]<=90)
        {
            dx++;
        }
        else if(a3[t]>=97&&a3[t]<=122)
        {
            xx++;
        }
        else if(a3[t]>=48&&a3[t]<=57)
        {
            sz++;
        }
        else if(a3[t]==32)
        {
            kg++;
        }
        else
        {
            qt++;
        }
    }
    cout<<"第三行文字中英文大写字母数量："<<dx<<" 小写字母数量："<<xx<<"数字数量："<<sz<<"空格数量："<<kg<<"其他字符数量："<<qt<<endl;

    return 0;
}
