#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a < b)  a = b;
	if (a < c) a = c;
    if (a < d) a = d;
	printf("%d", a);
	return 0;
}