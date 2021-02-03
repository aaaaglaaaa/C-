#include<stdio.h>
struct stu
{
	int h;
	char name[20];
	float f[3];
	float sum;
}stu[101],t;
int main()
{
	int n,i,j;
	struct stu;
	scanf("%d\n", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d %s %f %f %f", &stu[i].h, &stu[i].name, &stu[i].f[0], &stu[i].f[1], &stu[i].f[2]);
		stu[i].sum = (stu[i].f[1] + stu[i].f[2] + stu[i].f[3])/3.0;
	}
	for (i = 0; i < n-1; i++)
	{
		for (j = 0; j < n-1-i;j++)
		{
			if (stu[i].sum < stu[j].sum)
			{
				stu[i] = t; stu[i] = stu[j]; stu[j] = t;
			}
			else if (stu[i].sum == stu[j].sum)
			{
				if (stu[i].h > stu[j].h)
				{
					t=stu[i]; stu[i] = stu[j]; stu[j] = t;
				}
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf("%d %s %.1f\n", stu[i].h, stu[i].name, stu[i].sum);
	}
	return 0;
}