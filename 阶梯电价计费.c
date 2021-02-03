#include<stdio.h>
int main()
{
	double a;
    scanf("%lf", &a);
    if (a >= 0 && a <= 110) {
	a = a * 0.5;
	printf("%.2lf", a);
	}
	else if (a > 110 && a <= 210) {
		a = 110 * 0.5 + (a - 110) * 0.55;
		printf("%.2f", a);
	}
	else {
		a=110* 0.5 + 100 * 0.55 + (a - 210) * 0.70;
		printf("%.2lf", a);
	}
	return 0;
}