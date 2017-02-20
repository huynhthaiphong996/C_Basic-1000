#include <stdio.h>
#include <math.h>
void main()
{
    int n,i;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0) {
                printf("\n%d khong phai so nguyen to!",n);
                return;
        }
    }
    printf("\n%d la so nguyen to!",n);
}
