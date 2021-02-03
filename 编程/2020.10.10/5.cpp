#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    scanf("%d",&n);
    int a[n+1];
    int minx=100000;
    for (int i = 0; i <=n; ++i)  scanf("%d",&a+i);
    for (int i = 0; i <=n; ++i)
    {
        for (int j=i+1;j<=n; ++j)
        {
            if(a[i]>a[j])  minx=min(minx,a[i]-a[j]);
            else           minx=min(minx,a[j]-a[i]);
       }
    }
    printf("%d\n",minx);
    return 0;
}
