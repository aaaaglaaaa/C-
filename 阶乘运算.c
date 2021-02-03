#include<stdio.h>
int main()
{
	int a, b,c=1,d=1,i, j=1;
	float e;
	scanf("%d %d", &a, &b);
	for (i = 1; i <= a; i++)
	{
		c = c * i;
	}
	for (i = 1; i <= b; i++)
	{
		j = j * i;
	}
	for (i = 1; i <= (a - b); i++)
	{
		d = d * i;
	}
	e = c / d / j;
	printf("%.2f", e);
	return 0;
}