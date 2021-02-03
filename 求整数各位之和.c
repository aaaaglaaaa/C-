#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d", &a);
	b = a /100;
	c = (a - b * 100) / 10;
	d = a - b * 100 - c * 10;
	e = d + b + c;
	printf("%d", e);
	return 0;
}