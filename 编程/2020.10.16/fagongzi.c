#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a,b,c,d,e,f,m;
	scanf("%d",&m);
	a=m/100;
	b=(m-a*100)/50;
	c=(m-a*100-b*50)/20;
	d=(m-a*100-b*50-c*20)/10;
	e=(m-a*100-b*50-c*20-d*10)/5;
	f=(m-a*100-b*50-c*20-d*10-e*5)/1;
    printf("%d %d %d %d %d %d\n",a,b,c,d,e,f);

	return 0;
}
