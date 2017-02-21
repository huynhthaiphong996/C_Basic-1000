#include <stdio.h>
#include <math.h>
float canbachai(int n,int x);

void main()
{
    int n,x;
    float s;
    printf("Nhap x:");
    scanf("%d",&x);

    printf("Nhap n:");
    scanf("%d",&n);

    s = (float)canbachai(n,x);

    printf("\nKet qua: s = %f",s);
}


float canbachai(int n,int x)
{
    if(n==0) return 0;
    if(n==1) return sqrt(x);
    else return sqrt(pow(x,n)+canbachai(n-1,x));
}

