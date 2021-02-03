#include<stdio.h>
int main()
{
	int a[4],i,j,b;
	scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
	for (i = 0; i <= 2; i++)
	{
		for(j=i+1;j<=3;j++)
		{
			if (a[i] >= a[j])
			{
				b = a[i];
				a[i] = a[j];
				a[j] = b;
			}
		}
	}
	for (i = 0; i <= 3; i++) printf("%d ", a[i]);
	return 0;
}