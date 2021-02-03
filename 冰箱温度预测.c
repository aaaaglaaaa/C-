#include<stdio.h>
int main()
{
	double a,b,t;
	double c;
	scanf("%lf %lf",&a,&b);
	t = a + b / 60.00;
	c = 4 * t * t / (t + 2) - 20.00;
	printf("%.2lf",c);
	return 0;
}