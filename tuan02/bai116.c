#include <stdio.h>
void main()
{
    int i,n,s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    printf("\nKet qua: S = %d",s);
}
