 #include<stdio.h>
  int main()
  {
      int n, i, ii, temp, j; int a[1000][1000];
      scanf("%d",&n);
      
      for(i=0;i<n;i++)
          for(j=0;j<n;j++)
              scanf("%d",&a[i][j]);
         printf("%d ",a[0][0]);
     for(ii=1;ii<n*2;ii++)
     {
         if(ii<n)
         {
            if(ii%2==1)//�������Ǵ�С����
            {
                 for(i=0;i<ii+1;i++)
                     printf("%d ",a[i][ii-i]);
             }
             else//ż�����ǴӴ�С
             {
                 for(i=0;i<ii+1;i++)                     printf("%d ",a[ii-i][i]);
             }
         }
         else
         {
             if(ii%2==1)//�������Ǵ�С����,�������Ϊ2*n-ii�Σ��������Ǵ�ii-n+1��ʼ
             {
                 for(i=0;i<2*n-1-ii;i++)
                     printf("%d ",a[ii-n+1+i][n-1-i]);
             }
             else
            {
                 for(i=0;i<2*n-1-ii;i++)
                     printf("%d ",a[n-1-i][ii-n+1+i]);
             }
        }
     }
 }