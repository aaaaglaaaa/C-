#include<stdio.h>
int main()
{
	int n, a[100],i;
	float m=0;
	scanf("%d\n", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d", &a[i]);
		m = m + a[i];
	}
	m = m / n;
	printf("%.2f", m);
	return 0;
}