#include <stdio.h>
void main()
{
    int n,k,x=1;
    do
    {
        printf("\nNhap n:");
        scanf("%d",&n);
    }while(n<=0);

    while(x<n)
    {
        x*=3;
    }

    if(x==n) printf("\n%d co dang 3^k",n);
    else printf("\n%d khong co dang 3^k",n);
}

