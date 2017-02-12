#include <stdio.h>
void main()
{
    int n,i,s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        s+=(2*i+1)/(2*i+2);
    }
    printf("\nKet qua S = %d",s);
}
