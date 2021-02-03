#include<stdio.h>
struct s 
{
	int x1, y1, x2, y2;
};
int main()
{
	int n, i, j, sum = 0, a[101][101],k;
	struct s b[100];
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &b[i].x1, &b[i].y1,& b[i].x2, &b[i].y2);
	}
	for (k = 0; k < n; k++)
	{
		for (i = b[k].x2; i > b[k].x1; i--)
		{
			for (j = b[k].y2; j > b[k].y1; j--)
			{
				a[i][j] = 1;
			}
		}
	}
	for (i = 0; i < 101; i++)
	{
		for (j = 0; j < 101; j++)
		{
			if (a[i][j] == 1) sum++;
		}
	}
	printf("%d",sum);
	return 0;
}