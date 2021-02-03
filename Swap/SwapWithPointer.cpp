// 函数功能：尝试理解值传递的概念
// 未能完成交换
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>

void swap(int* px,int* py) //函数定义，接收地址值 
{ 	int z;
	z= *px;
	*px= *py;
	*py = z;
}
int main( ) 
{ 
	int a,b;
	int *pa=&a,*pb=&b;
	a=10;
	b=20;

	printf("调用前：a=%d\tb=%d\n",a,b);
	swap(pa,pb); //函数调用，将a和b的指针传入函数 
	printf("调用后：a=%d\tb=%d\n",a,b);

	return 0;
}
