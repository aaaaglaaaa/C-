
#include<stdio.h> 


int main()
{

   

    float a, b ,m, M, r, R,e=7.86,f=19.3,PI=3.1415926;//m,M分别表示铁球和金球质量 

    scanf("%f %f", &a, &b);
    if (a < 0 || b <0) return -1;
    r = a / 20.0;

    R = b / 20.0;  //处理数据，简化 

    m = (e * PI * r * r * r * 4 / 3);

    M = (f* PI * R * R * R * 4 / 3); //公式 

    printf("%.3f %.3f\n", m, M);  //保留三位小数输出 

    return 0;

}
