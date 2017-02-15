#include <stdio.h>
void main()
{
    int x;
    printf("Nhap x:");
    scanf("%d",&x);
    if(x>=5)
    {
        printf("\nf(x)=%d",2*x*x+5*x+9);
    }
    else
    {
        printf("\nf(x)=%d",-2*x*x+4*x-9);
    }
}
