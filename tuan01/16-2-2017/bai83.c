#include <stdio.h>
void main()
{
    float a,b;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);

    if(a*b>=0) printf("%.3f va %.3f cung dau!",a,b);
    else printf("%.3f va %.3f khac dau!",a,b);
}
