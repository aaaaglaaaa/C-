#include<stdio.h>
int main()
{
	unsigned int m;
	scanf("%d", &m);
	if (m >= 90) putchar('A');
	else if (m >= 80) putchar('B');
	else if (m >= 70) putchar('C');
	else if (m >= 60) putchar('D');
	else putchar('E');
	return 0;

}