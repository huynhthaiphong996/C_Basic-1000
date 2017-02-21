#include <stdio.h>
void main()
{
    int n,i,x;
    float s=0;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("Nhap n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s+=(float)(pow(x,i))/(float)giaithua(i);
    }
    printf("\nKet qua S = %f",s);
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


