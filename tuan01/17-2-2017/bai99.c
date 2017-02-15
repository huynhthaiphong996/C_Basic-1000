#include <stdio.h>
float kiemtra(float a,float b,float c);
void main()
{
    float a,b,c,temp;
    printf("Nhap a:");
    scanf("%f",&a);
    printf("Nhap b:");
    scanf("%f",&b);
    printf("Nhap c:");
    scanf("%f",&c);

    temp =a+b+c;
    printf("\nSap xep:");

        if(a==b || a==c)
        {
            if(b>c) printf("%.3f %.3f %.3f",c,a,b);
            else printf("%.3f %.3f %.3f",b,a,c);
        }else if(b==c)
        {
            if(b>a) printf("%.3f %.3f %.3f",a,c,b);
            else printf("%.3f %.3f %.3f",b,c,a);
        }else
        {
            do
            {
                 if(kiemtra(a,b,c)==a)
                    {
                        printf("%.3f ",a);
                        a=temp;
                    }
                else if(kiemtra(a,b,c)==b)
                    {
                        printf("%.3f ",b);b=temp;
                    }
                else if(kiemtra(a,b,c)==c)
                    {
                        printf("%.3f ",c);c=temp;
                    }

            }while(a!=temp || b!=temp || c!=temp);

        }


}

float kiemtra(float a,float b,float c)
{

        if(a>b)
        {
            if(b>c) {return c;}
            return b;
        }
        else{
            if(a>c) return c;
            return a;
        }

}
