#include <stdio.h>
#include <math.h>
float kiemtra(float n);
void main()
{
    float a,b,c;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    printf("Nhap c:");
    scanf("%f",&c);

    printf("\nCac so da nhap la: \na=%f\nb=%f\nc=%f",a,b,c);

   a=kiemtra(a);
    b= kiemtra(b);
    c=kiemtra(c);

    printf("\nCac so da chuyen doi la: \na=%f\nb=%f\nc=%f",a,b,c);

}

float kiemtra(float n)
{
    if(n<0) n=-(n);
    return n;
}
