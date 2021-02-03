#include<stdio.h>
#include<string.h>
void dele(char str[],char c)
{
	int i,j=0;
	for (i =j= 0;i<100; i++)
	{
		if (str[i] == '\0') break;
		if (c != str[i])
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
	printf("%s", str);
}
int main()
{
	char str[100],c;
	gets(str);
	c = getchar();
	dele(str, c);
	return 0;
}