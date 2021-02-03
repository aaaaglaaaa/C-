#include<stdio.h>
int main()
{
	int n,a, i;
	scanf("%d",&n);
	a = n;
	for (i = 0; i <= a;i++)
{
		if (n == 1) break;
		else if (n % 2 == 0)
		{
			n = n / 2;
		}
		else if (n % 2 == 1)
		{
			n = n * 3 + 1;
		}
	}
	printf("%d", i);
	return 0;
}