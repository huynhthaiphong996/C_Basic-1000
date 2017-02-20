#include <stdio.h>
void main()
{
    int n,i;
    float s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=(float)(i)/(float)(i+1);
    }
    printf("\nKet qua S = %f",s);
}

