#include<stdio.h>
#include<math.h>
int main()
{
	float sum = 0,  i,n;
	scanf("%f", &n);
	for (i = 1; i <= n; i++)
	{
		sum = sum + pow(-1, (i - 1)) * i / (2 * i - 1);
	}
	printf("%.3f", sum);
	return 0;
}