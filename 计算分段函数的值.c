#include<stdio.h>
#include<math.h>
int main()
{
	double a, b;
	scanf("%lf", &a);
	if (a >= 0)
		b = sqrt (a);
	else 
		b = (a + 1) * (a + 1) + a + a + 1 / a;
	printf("%.2lf", b);
	return 0;
}