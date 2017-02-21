#include <stdio.h>
#include <math.h>
void main()
{
    int n;
    printf("Nhap n:");
    scanf("%d",&n);
    if(ktnguyento(n)==1) printf("\n%d la so nguyen to!",n);
    else printf("\n%d khong phai la so nguyen to!",n);
}

int ktnguyento(int n)
{
    int i;
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
