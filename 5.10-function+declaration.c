#include<stdio.h>
int IsPrime(int n); //函数声明                          
int main()
{
	int n, i, result = 0;
	for (n = 101; n <= 200; n++)
	{
		result=IsPrime(n);//函数调用                         
		if(result==1)  
			printf("%4d",n);     
	}
	return 0;
}
int IsPrime(int n) //函数定义 
{	
    int i,IsPrimeFlag=1;
	for (i = 2;i < n;i++)
	{...}
	return IsPrimeFlag;                      
}



	/*if (IsPrimeFlag==0) 
		printf("%d is not a prime number. \n", n);
	else 
		printf("%d is a prime number. \n", n);*/
