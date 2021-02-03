#include<stdio.h>
int main()
{
	int n=10,i, j;
	scanf("%d", &n);
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i; ++j)
		{
			if (i % j == 0)
			{
				if (i != j) break;
				if (i == j) printf("%d\n", i);
			}
		}
	}
	return 0;
}