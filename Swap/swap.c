// �������ܣ��������ֵ���ݵĸ���
// δ����ɽ���
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>

void swap(int x,int y) // �β�Ϊ���ͱ���������ʵ�ε�ֵ 
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

	printf("����ǰ��a=%d\tb=%d\n",a,b);
	swap(a,b); //�������ã�ʵ��Ϊ���α��� 
	printf("���ú�a=%d\tb=%d\n",a,b);

	return 0;
}
