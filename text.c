
#include<stdio.h>
#define PI 3.1415926 
int main()
{
    double a, b ,m, M, r, R,e=7.86,f=19.3;//m,M分别表示铁球和金球质量 
    scanf("%lf %lf", &a, &b);
    
    if (a < 0 || b <0) return -1;    R = b / 20.0;  //处理数据，简化 

    r = a / 20.0;
    m = (e * PI * r * r * r * 4 / 3);
    M = (f* PI * R * R * R * 4 / 3); //公式 
    printf("%.3lf %.3lf\n", m, M);  //保留三位小数输出 
    return 0;
}