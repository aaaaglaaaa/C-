#include<stdio.h>
int main()
{
	int m,n,q,r;
	scanf("%d %d", &m, &n);
	if (n==0) return -1;
	q=m/n;
	r=m%n;
	if (n >10000 || m >10000 || m<=0 || n<=0) return -1;
	if (r==0)
		printf("yes");
	else
		printf("%d %d", q,r);
	return 0;
}