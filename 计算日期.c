#include<stdio.h>
int main()
{
	
	/*if (a % 400 == 0||(a % 4 == 0&&a%100!=0))
	{
		if (b <= 31) printf("1 %d", b);
		else if (b < 61) printf("2 %d", b - 31);
		else if (b < 92) printf("3 %d", b - 60);
		else if (b <122 ) printf("4 %d", b - 91);
		else if (b < 152) printf("5 %d", b - 121);
		else if (b < 183) printf("6 %d", b - 151);
		else if (b < 213) printf("7 %d", b - 182);
		else if (b < 244) printf("8 %d", b - 212);
		else if (b < 275) printf("9 %d", b - 243);
		else if (b < 305) printf("10 %d", b - 274);
		else if (b < 336) printf("11 %d", b - 304);
		else if (b < 367) printf("12 %d", b - 335);
	}
	else
	{
		if (b <= 31) printf("1 %d", b);
		else if (b < 61) printf("2 %d", b - 31);
		else if (b < 91) printf("3 %d", b - 59);
		else if (b < 121) printf("4 %d", b - 90);
		else if (b < 151) printf("5 %d", b - 120);
		else if (b < 182) printf("6 %d", b - 150);
		else if (b < 212) printf("7 %d", b - 181);
		else if (b < 243) printf("8 %d", b - 211);
		else if (b < 274) printf("9 %d", b - 242);
		else if (b < 304) printf("10 %d", b - 273);
		else if (b < 335) printf("11 %d", b - 303);
		else if (b < 366) printf("12 %d", b - 334);
	}
	return 0;*/
	int  d,i,y;
	int a[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 },A=0,Z=0;
	scanf("%d %d",&y,&d);
	if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
		a[1]++;
	for (i = 0; i < 12; i++)
	{
		Z = A + a[i];
		if (A < d && Z >= d)
		{
			printf("%d %d", i + 1, d - A);
			return 0;
		}
		else A = Z;
	}
	return 0;
}