#include<stdio.h>
int main()
{
	int N, i, ji = 0, ou = 0, a = 0, b = 0, c = 0;
	scanf("%d", &N);
	for (i = 1; i <= N; i++)
	{
		if (i % 2 == 1) ji++;
		if (i % 2 == 0) ou++;
		if (i % 3 == 0) a++;
		if (i % 5 == 0) b++;
		if (i % 7 == 0) c++;
	}
	printf("%d %d %d %d %d", ji, ou, a, b, c);
	return 0;
}