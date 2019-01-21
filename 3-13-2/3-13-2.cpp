/* 1452210 计算机1班 郑熙远 */
#include <iostream>

using namespace std;

int main()
{
    cout << "输入当月利润" << endl;
    double a,b;
    int c;
    cin>>a;
    c=a/100000;
    switch(c)
    {
        case 0:
            b=0.1*a;
            break;
        case 1:
            b=10000+(a-100000)*0.075;
            break;
        case 2:
        case 3:
            b=10000+7500+(a-200000)*0.05;
            break;
        case 4:
        case 5:
            b=10000+7500+10000+(a-400000)*0.03;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
            b=10000+7500+10000+6000+(a-600000)*0.015;
            break;
        default:
            b=10000+7500+10000+6000+6000+(a-1e6);
            break;
    }
    cout<<"应发奖金"<<b<<endl;
    return 0;
}
