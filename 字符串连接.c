#include <stdio.h>
#include <string.h>
 
char fun(char a[], char b[]) 
{
	int n1, n2, i, j;
	n1 = strlen(a);
	n2 = strlen(b);
	for (i = 0; i < n1; i++) 
	{
		printf("%c", a[i]);
	}
	for (j = 0; j < n2; j++) 
	{
		printf("%c", b[j]);
	}
	return (a[100], b[100]);
}
 
int main() 
{
	char a[100], b[100];
	gets(a);
	gets(b);
	fun(a, b);
	return 0;
}