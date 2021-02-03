#include<stdio.h>
int main()
{
	int N,i=0,j;
	struct student
	{
		char name[20];
		int f[6];
		int z;
	}a[100], t;
	scanf("%d\n", &N);
	while (i < N)
	{
		a[i].z = 0;
		scanf("%s", &a[i].name);
		for (j = 0; j < 6; j++)
		{
			scanf("%d", &a[i].f[j]);
			a[i].z = a[i].z + a[i].f[j];
		}
		i++;
	}
	for (i = 0; i < N - 1; i++)
	{
		for (j = 0; j < N - 1 - i; j++)
		{
			if (a[j].z < a[j + 1].z)
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
			else if (a[j].z == a[j + 1].z)
			{
				if (a[j].f[5] < a[j + 1].f[5])
				{
					t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
				}
			}
		}
		for (i = 0; i < N; i++)
		{
			printf("%s %d %d\n", a[i].name, a[i].z, a[i].f[5]);
		}
		return 0;
	}
}