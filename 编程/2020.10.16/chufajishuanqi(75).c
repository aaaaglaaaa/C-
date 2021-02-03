#include <stdio.h>
int main(int argc, char const* argv[])
{
	int m, n, q, r, a, b;
	scanf("%d %d %d %d", &m, &n, &q, &r);
	a = m / n;
	b = m % n;
	if (n = 0) return -1;
	if (n <= -10000 ||  m <= -10000) return -1;
	if (n >= 10000 ||  m >= 10000) return -1;
	if (q == a && r == b)
	{
		printf("yes\n");
	}
	else
	{
		printf("%d %d\n", a, b);
	}
	return 0;
}
