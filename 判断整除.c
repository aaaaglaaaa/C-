#include<stdio.h>
int main()
{
	int a=0,b,c;
	scanf("%d",&a);
	b = a % 5;
	c = a % 7;
	if (b == 0 && c == 0) printf("yes");
	else printf("no");
	return 0;  
}