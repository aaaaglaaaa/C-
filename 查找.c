#include<stdio.h>
int main()
{
	int n, a[100],k,i,j=0;
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] == k)
		{
			printf("%d ", i);
			j++;
		}
	}
	if (j == 0)
	{
		printf("-1");
	}
	return 0;
}