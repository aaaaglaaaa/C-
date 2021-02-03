#include<stdio.h>
int main()
{
	int n , i, j,a[1000],b;
	scanf("%d", &n);
	if (n <= 1 || n%2==1 || n >= 1000) return -1;
	for (b = 0; b < 1000; b++)
		a[b] = 0;
	for (i = 2; i <= n; i++)
	{
		for (j = 2; j <= i; ++j)
		{
			if (i % j == 0)
			{
				if (i != j) break;
				if (i == j) 
				{
					a[i] = i;
					//printf("%d\n ", a[i]);
				}
			}
		}
	}
	for (i = 2; i <= n; i++)
	{
		for (j =n; j>2; j--)
		{
			if (n - a[i] == a[j])
			{
				if (i != j)
				{
					printf("%d %d",i, j);
					return 0;
				}
			}
		}
	}
	return 0;
}