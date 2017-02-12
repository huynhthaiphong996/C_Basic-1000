#include <stdio.h>
void main()
{
    int n,i,s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=giaithua(i);
    }
    printf("\nKet qua S = %d",s);
}

int giaithua(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
