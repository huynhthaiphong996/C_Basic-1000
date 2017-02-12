#include <stdio.h>
#include <math.h>
float canbachai(int n);

void main()
{
    int n;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);

    s = (float)canbachai(n);

    printf("\nKet qua: s = %f",s);
}


float canbachai(int n)
{
    if(n==0) return 0;
    if(n==1) return sqrt(2);
    else return sqrt(2+canbachai(n-1));
}
