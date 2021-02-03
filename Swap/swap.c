// 函数功能：尝试理解值传递的概念
// 未能完成交换
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>

void swap(int x,int y) // 形参为整型变量，接收实参的值 
{ 
	int z;
	z=x;
	x=y;
	y=z;
}
int main( ) 
{ 
	int a,b;
	a=10;
	b=20;

	printf("调用前：a=%d\tb=%d\n",a,b);
	swap(a,b); //函数调用，实参为整形变量 
	printf("调用后：a=%d\tb=%d\n",a,b);

	return 0;
}
