#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d", &x);
	if (x < 1) y = x;
	else if (x >= 10) y = x * 3 - 11;
	else y = x * 2 - 1;
	printf("%d", y);
	return 0;
}