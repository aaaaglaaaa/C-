#include "stdio.h"
int main()
{
	int a,b,s;
    char c;   
    scanf("%d%c%d",&a,&c,&b);   
    switch(c) 
{     
    case '+':s=a+b;break;       
    case '-':s=a-b;break;      
    case '*':s=a*b;break;       
    case '/':if(b==0) return -1; s=a/b;break;
	case '%':if(b==0) return -1; s=a%b;break;       
    default:return -1;    }   
    printf("%d%c%d=%d",a,c,b,s);/* code */
	return 0;
}
