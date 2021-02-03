#include<stdio.h>

int main()
{
	int i, n,a[100],b[100],j,max=0,sum=0,c[100],sumx=0,e;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &c[i]);
	}
	for (i = 0; i < n; i++)
	{
		e = c[i];
		sum = 0;
		while (e != 0)
		{
			j = e % 10;
			sum += j;
			e = e / 10;
		}
		if (sumx < sum)
		{
			sumx = sum;
			max = c[i];
		}
		else if (sum == sumx)
		{
			if (c[i] > max)
				max = c[i];
		}
	}
	printf("%d", max);
	return 0;
}