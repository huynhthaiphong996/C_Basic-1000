#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,dem=1,m,s=0;
    int k=1,i;
    unsigned long a[10];
    printf("Nhap n:");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a[dem-1]= m%10;
        m= m/10;
        dem++;
    }

    for(i=dem-2;i>=0;i--)
    {
        s+=(a[i]*k);
        k*=10;
    }

    printf("\nSo dao nguoc cua %d la:  %d",n,s);


}



