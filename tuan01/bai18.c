#include <stdio.h>
void main()
{
    int n,i,x;
    float s=1;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("Nhap n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        s+=(float)(pow(x,2*i))/(float)giaithua(2*i);
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



