#include <stdio.h>
void main()
{
    int i,n,x,s=0;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=pow(x,i);
    }
    printf("\nKet qua: S = %d",s);
}

