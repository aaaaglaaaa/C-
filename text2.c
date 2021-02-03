#include<stdio.h>
#define PI 3.1415926  //¶¨ÒåÅÉµÄÖµ 


int main()
{

    int a, b, r, R;  //a,b,r,R·Ö±ðÎªÌúÇòºÍ½ðÇòÖ±¾¶ºÍ°ë¾¶ 

    float m, M;//m,M·Ö±ð±íÊ¾ÌúÇòºÍ½ðÇòÖÊÁ¿ 
    float pi = PI;

    scanf("%d %d", &a, &b);

    r = a / 2;

    R = b / 2;  //´¦ÀíÊý¾Ý£¬¼ò»¯ 

    m = (7.86 * pi * r * r * r * 4 / 3) / 1000;

    M = (19.3 * pi * R * R * R * 4 / 3) / 1000; //¹«Ê½ 

    printf("%.3f %.3f\n", m, M);  //±£ÁôÈýÎ»Ð¡ÊýÊä³ö 

    return 0;

}