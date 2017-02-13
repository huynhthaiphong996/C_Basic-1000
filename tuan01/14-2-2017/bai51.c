#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,dem=1,m;
    int max,i;
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
    max = a[0];
    for(i=1;i<dem-1;i++)
    {
        if(max<a[i]) max = a[i];
    }

    printf("\nChu so lon nhat cua %d la:  %d",n,max);


}

