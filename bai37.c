#include <stdio.h>
#include <math.h>
float canbacn(int n);

void main()
{
    int n;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);

    s = (float)canbacn(n);

    printf("\nKet qua: s = %f",s);
}


float canbacn(int n)
{

    if(n==1) return 0;
    else return pow((n+canbacn(n-1)),(1/(float)(n)));
}


