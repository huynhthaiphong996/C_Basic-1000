#include <stdio.h>
void main()
{
    unsigned int a,b;
    int i,max;
    printf("Nhap a:");
    scanf("%d",&a);

    printf("Nhap b:");
    scanf("%d",&b);
    if(a>b) max =a; else max =b;
    if(a==0 || b==0) printf("\nUCLN cua %d va %d la: %d",a,b,a+b);
    else
    {
        for(i=max;i>=1;i--)
        {
            if(a%i==0 && b%i==0) break;
        }
    }
    printf("\nBCNN cua %d va %d la: %d",a,b,a*b/i);

}

