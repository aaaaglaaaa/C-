#include<stdio.h>
#include<string.h>
int main()
{
	char a[7];
	int i;
	gets(a);
	for (i = 0; i < 7; i++)
	{
		if(a[i]<='Z'&&a[i]>='A')
		a[i] ='A'+'Z'-a[i];
		if (a[i] <= 'z' && a[i]>='a')
		a[i] = 'a' + 'z' - a[i];
	}
	puts(a);
	return 0;
}