#include<stdio.h>
void func(int);
int yi=0,er=0,san=0,si=0,wu=0,liu=0;
int main()
{
    int i,n,Pi,sum=0;
    float ave;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        scanf("%d",&Pi);
        sum+=Pi;
        func(Pi);
    }
    ave=1.0*sum/n;
    printf("%.2f\n%d %d %d %d %d %d",ave,yi,er,san,si,wu,liu);
    return 0;
}
void func(int a)
{
    if(a<=50)yi++;
    else if(a<=100)er++;
    else if(a<=150)san++;
    else if(a<=200)si++;
    else if(a<=300)wu++;
    else liu++;
}
