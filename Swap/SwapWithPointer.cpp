// �������ܣ��������ֵ���ݵĸ���
// δ����ɽ���
// jyhuo@mail.xidian.edu.cn 
#include <stdio.h>

void swap(int* px,int* py) //�������壬���յ�ֵַ 
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

	printf("����ǰ��a=%d\tb=%d\n",a,b);
	swap(pa,pb); //�������ã���a��b��ָ�봫�뺯�� 
	printf("���ú�a=%d\tb=%d\n",a,b);

	return 0;
}
