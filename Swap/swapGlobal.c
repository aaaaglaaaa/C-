// 函数功能：尝试理解值传递的概念
// 未能完成交换
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>
int a,b; 
void swap() //函数定义
{ 
	int z;
	z=a;
	a=b;
	b=z;
}
int main( ) 
{ 
	a=10;
	b=20;

	printf("调用前：a=%d\tb=%d\n",a,b);

	 swap(); //函数调用

	 printf("调用后：a=%d\tb=%d\n",a,b);

	return 0;
}
