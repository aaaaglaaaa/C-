#include<stdio.h>

int main()

{

    int i, j;

    scanf("%d", &i);

    j = i % 100;

    printf("%d ", i/100);

    printf("%d ", j/10);

    printf("%d", j%10);
return 0;

}
