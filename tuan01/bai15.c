#include <stdio.h>
void main()
{
    int n,i;
    float s=0;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s+=1/(float)tong(i);
    }
    printf("\nKet qua S = %f",s);
}

int tong(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}
