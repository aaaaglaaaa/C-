#include<stdio.h>
int main()
{
	int i, a, b;
	scanf("%d %d", &a, &b);
	for ( i=a > b ? b : a; i > 0; i--)
	{
		if (a % i == 0 && b % i == 0)
		{
			printf("%d", i);
			break;
		}
	}
	for (i = a > b ? a : b; i <= a * b; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf(" %d", i);
			break;
		}
	}
	return 0;
}