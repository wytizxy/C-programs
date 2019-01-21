/*1452210 计算机1班 郑熙远*/
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <windows.h>
#include <mmsystem.h>

using namespace std;

void setcolor(HANDLE hout, const int bg_color, const int fg_color)
{
	SetConsoleTextAttribute(hout, bg_color*16+fg_color);
}

char qr [21][21]=                      //1-M
    {{1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1},
    {1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,1,0,1,1,1,0,1},
    {1,0,0,0,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,1},
    {1,1,1,1,1,1,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,1,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
    {1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
int chnum(char c)                       //转换字符至Alphanumeric字符编码
{
    if (c >= '0' && c <= '9') return (unsigned char)(c - '0');

	if (c >= 'A' && c <= 'Z') return (unsigned char)(c - 'A' + 10);

	if (c == ' ') return 36;

	if (c == '$') return 37;

	if (c == '%') return 38;

	if (c == '*') return 39;

	if (c == '+') return 40;

	if (c == '-') return 41;

	if (c == '.') return 42;

	if (c == '/') return 43;

	return 44; // c == ':'
}

int azhi(int c)                        //指转整
{
    int zhizhuanzheng[]={  1,   2,   4,   8,  16,  32,  64, 128,  29,  58, 116, 232, 205, 135,  19,  38,
							 76, 152,  45,  90, 180, 117, 234, 201, 143,   3,   6,  12,  24,  48,  96, 192,
							157,  39,  78, 156,  37,  74, 148,  53, 106, 212, 181, 119, 238, 193, 159,  35,
							 70, 140,   5,  10,  20,  40,  80, 160,  93, 186, 105, 210, 185, 111, 222, 161,
							 95, 190,  97, 194, 153,  47,  94, 188, 101, 202, 137,  15,  30,  60, 120, 240,
							253, 231, 211, 187, 107, 214, 177, 127, 254, 225, 223, 163,  91, 182, 113, 226,
							217, 175,  67, 134,  17,  34,  68, 136,  13,  26,  52, 104, 208, 189, 103, 206,
							129,  31,  62, 124, 248, 237, 199, 147,  59, 118, 236, 197, 151,  51, 102, 204,
							133,  23,  46,  92, 184, 109, 218, 169,  79, 158,  33,  66, 132,  21,  42,  84,
							168,  77, 154,  41,  82, 164,  85, 170,  73, 146,  57, 114, 228, 213, 183, 115,
							230, 209, 191,  99, 198, 145,  63, 126, 252, 229, 215, 179, 123, 246, 241, 255,
							227, 219, 171,  75, 150,  49,  98, 196, 149,  55, 110, 220, 165,  87, 174,  65,
							130,  25,  50, 100, 200, 141,   7,  14,  28,  56, 112, 224, 221, 167,  83, 166,
							 81, 162,  89, 178, 121, 242, 249, 239, 195, 155,  43,  86, 172,  69, 138,   9,
							 18,  36,  72, 144,  61, 122, 244, 245, 247, 243, 251, 235, 203, 139,  11,  22,
							 44,  88, 176, 125, 250, 233, 207, 131,  27,  54, 108, 216, 173,  71, 142,   1};
    return zhizhuanzheng[c];
}
int azheng(int c)          //整转指
{
    int zhengzhuanzhi[]={  0,   0,   1,  25,   2,  50,  26, 198,   3, 223,  51, 238,  27, 104, 199,  75,
							  4, 100, 224,  14,  52, 141, 239, 129,  28, 193, 105, 248, 200,   8,  76, 113,
							  5, 138, 101,  47, 225,  36,  15,  33,  53, 147, 142, 218, 240,  18, 130,  69,
							 29, 181, 194, 125, 106,  39, 249, 185, 201, 154,   9, 120,  77, 228, 114, 166,
							  6, 191, 139,  98, 102, 221,  48, 253, 226, 152,  37, 179,  16, 145,  34, 136,
							 54, 208, 148, 206, 143, 150, 219, 189, 241, 210,  19,  92, 131,  56,  70,  64,
							 30,  66, 182, 163, 195,  72, 126, 110, 107,  58,  40,  84, 250, 133, 186,  61,
							202,  94, 155, 159,  10,  21, 121,  43,  78, 212, 229, 172, 115, 243, 167,  87,
							  7, 112, 192, 247, 140, 128,  99,  13, 103,  74, 222, 237,  49, 197, 254,  24,
							227, 165, 153, 119,  38, 184, 180, 124,  17,  68, 146, 217,  35,  32, 137,  46,
							 55,  63, 209,  91, 149, 188, 207, 205, 144, 135, 151, 178, 220, 252, 190,  97,
							242,  86, 211, 171,  20,  42,  93, 158, 132,  60,  57,  83,  71, 109,  65, 162,
							 31,  45,  67, 216, 183, 123, 164, 118, 196,  23,  73, 236, 127,  12, 111, 246,
							108, 161,  59,  82,  41, 157,  85, 170, 251,  96, 134, 177, 187, 204,  62,  90,
							203,  89,  95, 176, 156, 169, 160,  81,  11, 245,  22, 235, 122, 117,  44, 215,
							 79, 174, 213, 233, 230, 231, 173, 232, 116, 214, 244, 234, 168,  80,  88, 175};
    return zhengzhuanzhi[c];
}

int main()
{
    HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE);
    char mode[4]={0,0,1,0};      //数据编码模式 8-bit byte
    char text[]={'H','E','L','L','O',' ','W','O','R','L','D'};   //二维码要转换的文本
    int zfnum=sizeof(text)/sizeof(text[0]);             //文本中字符数量
    char zfs[9];                                        //文本字符数量转换成二进制
    zfs[8]=zfnum%2;
    zfs[7]=zfnum%4/2;
    zfs[6]=zfnum%8/4;
    zfs[5]=zfnum%16/8;
    zfs[4]=zfnum%32/16;
    zfs[3]=zfnum%64/32;
    zfs[2]=zfnum%128/64;
    zfs[1]=zfnum%256/128;
    zfs[0]=zfnum%512/256;
    int textnum[zfnum];                             //文本字符对应的Alphanumeric字符编码
    int t;
    for(t=0;t<zfnum;t++)
    {
        textnum[t]=chnum(text[t]);
    }
    int wei=zfnum/2+zfnum%2;
    int texteach[wei];                  //存储字符两两一组的数对数组
    for(t=0;t<zfnum/2;t++)                          //前数*45+后数
    {
        texteach[t]=textnum[2*t]*45+textnum[2*t+1];
    }
    if(zfnum%2==1)                                  //最后一个不配对情况，单独他自己一个数
    {
        texteach[wei-1]=textnum[zfnum-1];
    }
    char texteacher[zfnum/2][11];                       //存储字符两两一组的数对数组二进制
    for(t=0;t<zfnum/2;t++)
    {
        texteacher[t][10]=texteach[t]%2;
        texteacher[t][9]=texteach[t]%4/2;
        texteacher[t][8]=texteach[t]%8/4;
        texteacher[t][7]=texteach[t]%16/8;
        texteacher[t][6]=texteach[t]%32/16;
        texteacher[t][5]=texteach[t]%64/32;
        texteacher[t][4]=texteach[t]%128/64;
        texteacher[t][3]=texteach[t]%256/128;
        texteacher[t][2]=texteach[t]%512/256;
        texteacher[t][1]=texteach[t]%1024/512;
        texteacher[t][0]=texteach[t]%2048/1024;
    }
    char texteachertail[6];
    if(zfnum%2==1)                             //最后一个数不配对，再加一个他的数组
    {
        texteachertail[5]=texteach[wei-1]%2;
        texteachertail[4]=texteach[wei-1]%4/2;
        texteachertail[3]=texteach[wei-1]%8/4;
        texteachertail[2]=texteach[wei-1]%16/8;
        texteachertail[1]=texteach[wei-1]%32/16;
        texteachertail[0]=texteach[wei-1]%64/32;
    }
    char Data[16][8];                      //数据码数组
    char *d;
    int num=0;
    d=&Data[0][0];
    for(t=0;t<4;t++)                      //开始对数据码数组赋值
    {
        *d=mode[t];
        d++;
        num++;
    }
    for(t=0;t<9;t++)
    {
        *d=zfs[t];
        d++;
        num++;
    }
    int t0;
    for(t=0;t<zfnum/2;t++)
    {
        for(t0=0;t0<11;t0++)
        {
            *d=texteacher[t][t0];
            d++;
            num++;
        }
    }
    if(zfnum%2==1)
    {
        for(t=0;t<6;t++)
        {
            *d=texteachertail[t];
            d++;
            num++;
        }
    }
    for(t=0;t<4;t++)
    {
        *d=0;
        d++;
        num++;
    }
    int bbb;                      //按8bits重排,看还差几个0
    bbb=8-num%8;
    for(t=bbb;t<4;t++)
    {
        *d=0;
        d++;
        num++;
    }
    int ccc;                      //ccc表示距离排满1-M的编码区还差多少bit
    ccc=128-num;
    int fuzhu1=0;                   //辅助变量1
    for(t=ccc/8;t>0;t--)
    {
        if(fuzhu1==0)
        {
            *d=1;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            fuzhu1=1;
        }
        else if(fuzhu1==1)
        {
            *d=0;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=0;
            d++;
            num++;
            *d=1;
            d++;
            num++;
            fuzhu1=0;
        }
    }
    //
    //    数据码完成 Data
    //
    int Data0[16];             //数据码转换为10进制
    for(t=0;t<16;t++)
    {
        Data0[t]=Data[t][7]*1;
        Data0[t]=Data0[t]+Data[t][6]*2;
        Data0[t]=Data0[t]+Data[t][5]*4;
        Data0[t]=Data0[t]+Data[t][4]*8;
        Data0[t]=Data0[t]+Data[t][3]*16;
        Data0[t]=Data0[t]+Data[t][2]*32;
        Data0[t]=Data0[t]+Data[t][1]*64;
        Data0[t]=Data0[t]+Data[t][0]*128;
    }
    int bm[16][2];             // 编码多项式：bm[t][0]*x^bm[t][1]
    for(t=0;t<16;t++)
    {
        bm[t][0]=Data0[t];
        bm[t][1]=15-t;
    }
    int sc[16][2];             //生成多项式：a^sc[t][0]*x^sc[t][1]
    for(t=0;t<11;t++)
    {
        sc[t][1]=10-t;
    }
    sc[11][1]=0;
    sc[12][1]=0;
    sc[13][1]=0;
    sc[14][1]=0;
    sc[15][1]=0;
    sc[0][0]=0;
    sc[1][0]=251;
    sc[2][0]=67;
    sc[3][0]=46;
    sc[4][0]=61;
    sc[5][0]=118;
    sc[6][0]=70;
    sc[7][0]=64;
    sc[8][0]=94;
    sc[9][0]=32;
    sc[10][0]=45;
    sc[11][0]=0;
    sc[12][0]=0;
    sc[13][0]=0;
    sc[14][0]=0;
    sc[15][0]=0;
    for(t=0;t<16;t++)
    {
        bm[t][1]=15-t+10;         //编码多项式乘以x^10，使得编码多项式的最低次与生成多项式的最高次对齐
    }
    int x;
    int scc[16][2];
    for(t=0;t<16;t++)           //sc数组副本
    {
        for(t0=0;t0<2;t0++)
        {
            scc[t][t0]=sc[t][t0];
        }
    }
    for(x=0;x<16;x++)            //循环操作,直到编码多项式的次数小于生成多项式的次数。
    {
        bm[0][0]=azheng(bm[0][0]);    //把编码多项式的最高次系数写成a^n次方的形式
        for(t=0;t<11;t++)
        {
            sc[t][0]=(sc[t][0]+bm[0][0])%255;  //用a^5乘生成多项式，直接人工对齐两个多项式最高次的系数。若a的次数大于255，对255取模
        }
        for(t=0;t<11;t++)
        {
            sc[t][0]=azhi(sc[t][0]);      //生成多项式a^n展开成十进制数
        }
        bm[0][0]=azhi(bm[0][0]);
        for(t=0;t<16;t++)
        {
            bm[t][0]=bm[t][0]^sc[t][0];
        }
        for(t=0;t<15;t++)
        {
            bm[t][0]=bm[t+1][0];
            bm[t][1]=bm[t+1][1];
        }
        for(t=0;t<16;t++)
        {
            for(t0=0;t0<2;t0++)
            {
                sc[t][t0]=scc[t][t0];
            }
        }
        bm[15][0]=0;
        bm[15][1]=9-x;
    }
    //       纠错码结束，存在了bm[t][0]中
    int finald[26];          //存储数据码和纠错码的数组
    for(t=0;t<16;t++)
    {
        finald[t]=Data0[t];
    }
    for(t=0;t<10;t++)
    {
        finald[t+16]=bm[t][0];
    }
    char linshi[8];
    int xx;
    for(xx=0;xx<26;xx++)
    {
        linshi[7]=finald[xx]%2;
        linshi[6]=finald[xx]%4/2;
        linshi[5]=finald[xx]%8/4;
        linshi[4]=finald[xx]%16/8;
        linshi[3]=finald[xx]%32/16;
        linshi[2]=finald[xx]%64/32;
        linshi[1]=finald[xx]%128/64;
        linshi[0]=finald[xx]%256/128;
        int y=0,u=0,v=0;
        if(xx==0||xx==1||xx==2)
        {
            for(t=20-4*(xx%3),u=0;u<4;t--,u++)
            {
                for(t0=20,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==3||xx==4||xx==5)
        {
            for(t=9+4*(xx%3),u=0;u<4;t++,u++)
            {
                for(t0=18,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==6||xx==7||xx==8)
        {
            for(t=20-4*(xx%3),u=0;u<4;t--,u++)
            {
                for(t0=16,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==9||xx==10||xx==11)
        {
            for(t=9+4*(xx%3),u=0;u<4;t++,u++)
            {
                for(t0=14,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==12||xx==13||xx==14)
        {
            for(t=20-4*(xx%3),u=0;u<4;t--,u++)
            {
                for(t0=12,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==15)
        {
            qr[8][12]=linshi[0];
            qr[8][11]=linshi[1];
            qr[7][12]=linshi[2];
            qr[7][11]=linshi[3];
            qr[5][12]=linshi[4];
            qr[5][11]=linshi[5];
            qr[4][12]=linshi[6];
            qr[4][11]=linshi[7];
        }
        else if(xx==16)
        {
            qr[3][12]=linshi[0];
            qr[3][11]=linshi[1];
            qr[2][12]=linshi[2];
            qr[2][11]=linshi[3];
            qr[1][12]=linshi[4];
            qr[1][11]=linshi[5];
            qr[0][12]=linshi[6];
            qr[0][11]=linshi[7];
        }
        else if(xx==17)
        {
            qr[3][10]=linshi[0];
            qr[3][9]=linshi[1];
            qr[2][10]=linshi[2];
            qr[2][9]=linshi[3];
            qr[1][10]=linshi[4];
            qr[1][9]=linshi[5];
            qr[0][10]=linshi[6];
            qr[0][9]=linshi[7];
        }
        else if(xx==18)
        {
            qr[4][12]=linshi[0];
            qr[4][11]=linshi[1];
            qr[5][12]=linshi[2];
            qr[5][11]=linshi[3];
            qr[7][12]=linshi[4];
            qr[7][11]=linshi[5];
            qr[8][12]=linshi[6];
            qr[8][11]=linshi[7];
        }
        else if(xx==19||xx==20||xx==21)
        {
            for(t=9+4*(xx%3),u=0;u<4;t++,u++)
            {
                for(t0=10,v=0;v<2;t0--,v++)
                {
                    qr[t][t0]=linshi[y];
                    y++;
                }
            }
        }
        else if(xx==22)
        {
            qr[12][8]=linshi[0];
            qr[12][7]=linshi[1];
            qr[11][8]=linshi[2];
            qr[11][7]=linshi[3];
            qr[10][8]=linshi[4];
            qr[10][7]=linshi[5];
            qr[9][8]=linshi[6];
            qr[9][7]=linshi[7];
        }
        else if(xx==23)
        {
            qr[9][5]=linshi[0];
            qr[9][4]=linshi[1];
            qr[10][5]=linshi[2];
            qr[10][4]=linshi[3];
            qr[11][5]=linshi[4];
            qr[11][4]=linshi[5];
            qr[12][5]=linshi[6];
            qr[12][4]=linshi[7];
        }
        else if(xx==24)
        {
            qr[12][3]=linshi[0];
            qr[12][2]=linshi[1];
            qr[11][3]=linshi[2];
            qr[11][2]=linshi[3];
            qr[10][3]=linshi[4];
            qr[10][2]=linshi[5];
            qr[9][3]=linshi[6];
            qr[9][2]=linshi[7];
        }
        else if(xx==25)
        {
            qr[9][1]=linshi[0];
            qr[9][0]=linshi[1];
            qr[10][1]=linshi[2];
            qr[10][0]=linshi[3];
            qr[11][1]=linshi[4];
            qr[11][0]=linshi[5];
            qr[12][1]=linshi[6];
            qr[12][0]=linshi[7];
        }
    }
    for(t=0;t<6;t++)
    {
        for(t0=9;t0<13;t0++)
        {
            if((t*t0)%2+(t*t0)%3==0)
            {
                qr[t][t0]=(qr[t][t0]^1);
            }
        }
    }
    for(t=7;t<9;t++)
    {
        for(t0=9;t0<13;t0++)
        {
            if((t*t0)%2+(t*t0)%3==0)
            {
                qr[t][t0]=(qr[t][t0]^1);
            }
        }
    }
    for(t=9;t<13;t++)
    {
        for(t0=0;t0<6;t0++)
        {
            if((t*t0)%2+(t*t0)%3==0)
            {
                qr[t][t0]=(qr[t][t0]^1);
            }
        }
    }
    for(t=9;t<13;t++)
    {
        for(t0=7;t0<9;t0++)
        {
            if((t*t0)%2+(t*t0)%3==0)
            {
                qr[t][t0]=(qr[t][t0]^1);
            }
        }
    }
    for(t=9;t<21;t++)
    {
        for(t0=9;t0<21;t0++)
        {
            if((t*t0)%2+(t*t0)%3==0)
            {
                qr[t][t0]=(qr[t][t0]^1);
            }
        }
    }
    char info[15]={1,0,0,0,0,0,0,1,1,0,0,1,1,1,0};
    t0=0;
    for(t=0;t<6;t++)
    {
        qr[t][8]=info[t0];
        t0++;
    }
    for(t=7;t<9;t++)
    {
        qr[t][8]=info[t0];
        t0++;
    }
    qr[8][7]=info[t0];
    t0++;
    for(t=5;t>0;t--)
    {
        qr[8][t]=info[t0];
        t0++;
    }
    t0=0;
    for(t=20;t>12;t--)
    {
        qr[8][t]=info[t0];
        t0++;
    }
    for(t=14;t<21;t++)
    {
        qr[t][8]=info[t0];
        t0++;
    }


    //画出二维码！
    setcolor(hout,15,15);
        cout<<"                                              "<<endl;
    for(int m=0;m<21;m++)
    {
        setcolor(hout,15,15);
        cout<<"  ";
        for(int n=0;n<21;n++)
        {
            if(qr[m][n]==0)
            {
                setcolor(hout,15,15);
                cout<<"  ";
            }
            else if(qr[m][n]==1)
            {
                setcolor(hout,0,0);
                cout<<"  ";
            }
        }
        setcolor(hout,15,15);
        cout<<"  ";
        cout<<endl;
    }
    setcolor(hout,15,15);
    cout<<"                                              "<<endl;
    setcolor(hout,0,7);
    return 0;
}
