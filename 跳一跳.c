#include<stdio.h>
int main()
{
	int n,a,b=0;
	scanf("%d", &n);
	while (n!=0)
	{
		if (n == 1) a = 1;
		else if (n == 2 && (a == 1 || b == 0)) a = 2;
		else if (n = 2 && a % 2 == 0) a += 2;
		b=b+a;
		scanf("%d",&n);
	}
	printf("%d",b);
	return 0;
}