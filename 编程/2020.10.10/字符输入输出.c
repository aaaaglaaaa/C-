#include "stdio.h"
int main()
{
	int a,b,c,d,e,f;
	scanf("%c|%c|%c|%c|%c",&a,&b,&c,&d,&e);
    a=a+32;
    b=b+32;
    c=c+32;
    d=d+32;
    e=e+32;
    f=33;
    printf("%c%c%c%c%c%c\n",a,b,c,d,e,f);
	return 0;
}