#include <stdio.h>
void main()
{
    float a,b,c,max;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    printf("Nhap c:");
    scanf("%f",&c);
    max = a;
    if(a<b)
    {
        max = b;
        if(max<c) max = c;
    }
    else
    {
        if(max<c) max = c;
    }
    printf("\nSo lon nhat trong 3 so la: %f",max);

}
