#include <stdio.h>
void main()
{
    unsigned long n,dem=1,i=10;
    printf("Nhap n:");
    scanf("%d",&n);
    while(n/i>=1)
    {
        i*=10;
        dem++;
    }
    printf("\n%d co so luong chu so la: %d",n,dem);

}
