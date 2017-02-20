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
        if(i%10 == 2 ||i%10 == 3 ||i%10 == 7||i%10 == 8) continue;
        else if(kiemtra(i)==1) printf("%d ",i);
    }
}
int kiemtra(int n)
{
    if(sqrt(n)==(int)sqrt(n)) return 1;
    else return 0;
}
