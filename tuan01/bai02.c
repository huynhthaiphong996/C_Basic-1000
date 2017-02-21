#include <stdio.h>
void main()
{
    int n,i,s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i*i;
    }
    printf("\nKet qua S = %d",s);
}

