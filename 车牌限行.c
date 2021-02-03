#include<stdio.h>
int main()
{
    int  a,b,c;
	scanf("%d %d %d", &a, &b, &c);
	//if (c / 100000 == 0) return -1;
	c = c % 10;
	//if (a < 1 || a>7 || b < 0 || b>600) return -1;
	if (a == 6 || a == 7) 
		printf("%d no", c);
	else  
	{
		if (b < 200) 
			printf("%d no", c);
		else if (b >= 200 && b < 400)
		{
			if ( c%5==a) 
				printf("%d yes", c);
			else 
				printf("%d no", c);
		}
		else if (b >= 400)
		{
			if (c%2==a%2)
				printf("%d yes", c);
			else 
				printf("%d no", c);
		}
	}
	//else return -1;
	return 0;
}