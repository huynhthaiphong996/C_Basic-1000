#include <stdio.h>
void main()
{
    int a,b;
    do{
        printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    }while(a<0 || b<0);


    if(a==0 || b==0) printf("\nUCLN cua %d va %d la: %d",a,b,a+b);
    else
    {
        int min,i;
        if(a>b) min = b; else min =a;

        for(i=min;i>=1;i--)
        {
            if(a%i==0 && b%i==0) {printf("\nUCLN cua %d va %d la: %d",a,b,i);return;}
        }
    }

}
