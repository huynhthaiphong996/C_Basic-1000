#include <stdio.h>
#include <math.h>
int tong(int n);
float phanso(int n,int x);

void main()
{
    int n,x;
    float s;
    printf("Nhap x:");
    scanf("%d",&x);
    printf("Nhap n:");
    scanf("%d",&n);

    s = (float)phanso(n,x);

    printf("\nKet qua: s = %f",s);
}


float phanso(int n,int x)
{
    if(n==0) return 0;
    else return pow(-1,n)*pow(x,n)/(float)tong(n) +phanso(n-1,x);
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



