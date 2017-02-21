#include <stdio.h>
int kiemtra(float a, float b,float c);
void main()
{
    float a,b,c;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    printf("Nhap c:");
    scanf("%f",&c);

    if(kiemtra(a,b,c)==1)
    {
        if(a==b==c) printf("\nDay la tam giac deu!");
        else if(a==b || b==c || a==c)
        {
            if((a*a+b*b)==c*c ||(a*a+c*c)==b*b ||(b*b+c*c)==a*a) printf("\nDay la tam giac vuong can!");
            else printf("\nDay la tam giac can!");
        }
        else if((a*a+b*b)==c*c ||(a*a+c*c)==b*b ||(b*b+c*c)==a*a) printf("\nDay la tam giac vuong!");
        else printf("\nDay la tam giac thuong!");
    }
    else printf("\nKhong phai 3 canh cua tam giac!");
}

int kiemtra(float a, float b,float c)
{
    if(a+b>c && a+c>b &&b+c>a) return 1;
    else return 0;
}
