#include <stdio.h>
#include <math.h>
void main()
{
    int n,i,x,s=0;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("\nNhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=pow(x,i);
    }
    printf("\nKet qua S = %d",s);
}


