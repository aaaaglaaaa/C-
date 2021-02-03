#include<stdio.h>
int main()
{
	int n, i, a[100], count = 0;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=1;i<n-1;i++)
	{
		if (a[i] < a[i + 1] && a[i] < a[i - 1]) count++;
		if (a[i] > a[i + 1] && a[i] > a[i - 1]) count++;
	}
	count = count ;
	printf("%d", count);
	return 0;
}