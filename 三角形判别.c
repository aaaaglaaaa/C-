#include<stdio.h>
int main()
{
	int a, b, c,d;
	scanf("%d %d %d", &a, &b, &c);
	if ((0<a < 1000) && (b >0 && b < 1000) &&( c > 0 && c < 1000))
	{
		if (a + b > c && a + c > b && b + c > a)
		{
			d = a + b + c;
			printf("%d", d);
		}
		else printf("No");
	}
	else return -1;
	return 0;
}