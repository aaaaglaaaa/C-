#include<stdio.h>
int main()
{
	float a, b, c, d;
	scanf("%f %f %f", &a, &b, &c);
	d = a * b * c;
	printf("%.3f", d);
	return 0;
}