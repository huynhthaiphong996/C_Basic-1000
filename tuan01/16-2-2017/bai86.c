#include <stdio.h>
//#include <math.h>
int tong(int n);
void main()
{
    int n,s;
    printf("Nhap n:");
    scanf("%d",&n);
    s=tong(n);
    printf("\nS(n) = %d",s);
}

int tong(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    {
        s+=pow(i,3);
    }
    return s;
}
