#include<stdio.h>
int main()
{
	int a,sum=0;
	scanf("%d", &a);
	while (a != 0)
	{
		if (a % 2 == 1)
			sum = sum + a;
		else if (a == 0) break;
		else if (a % 2 == 0) sum = sum;
		scanf("%d", &a);
	}
	printf("%d", sum);
	return 0;
}