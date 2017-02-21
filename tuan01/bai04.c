#include <stdio.h>
void main()
{
    int n,i;
    float s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=1/(float)(2*i);
    }
    printf("\nKet qua S = %f",s);
}

