// �������ܣ��������ֵ���ݵĸ���
// δ����ɽ���
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>
int a,b; 
void swap() //��������
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

	printf("����ǰ��a=%d\tb=%d\n",a,b);

	 swap(); //��������

	 printf("���ú�a=%d\tb=%d\n",a,b);

	return 0;
}
