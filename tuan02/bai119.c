#include <stdio.h>
#include <math.h>
void main()
{
    int n,i;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nCac so nguyen to nho hon n:");
    for(i=2;i<n;i++)
    {
        if(kiemtra(i)==1) printf("%d ",i);
    }
}

int kiemtra(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
       if( n%i==0) return 0;
    }
    return 1;
}
