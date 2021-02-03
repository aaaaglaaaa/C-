#include<stdio.h>
int main()
{
	int i,j;
	char n;
	scanf("%c",&n);
	for(i=0;i<=n-'A';i++)
	{
		for(j=0;j<n-'A'-i;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		printf("%c",j+'A');
		for(j=i-1;j>=0;j--)
		printf("%c",j+'A');
		printf("\n");
	}
return 0;

}