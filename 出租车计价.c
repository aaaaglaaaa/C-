#include<stdio.h>
int main()
{
	float a, b;
	float m;int c;
	scanf("%f %d", &a, &c);
	if (a <= 3) b = 10;
	else if (a > 10) b = 24 + 3 * (a - 10);
	else  b = 10 + 2 * (a - 3);
	c = c / 5;
	b = b + c * 2;
	m = b;
	m=(int)(m+0.5);
	printf("%.0f", m);
	return 0;
}