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

    if(n==1) return 1;
    else return pow((giaithua(n)+canbacn(n-1)),(1/(float)(n+1)));
}


int giaithua(int n)
{
    int i,s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}

