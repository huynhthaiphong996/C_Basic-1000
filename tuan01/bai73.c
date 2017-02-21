#include <stdio.h>
#include <math.h>
int giaithua(int n);
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
    if(n==0) return -1;
    else return pow(-1,n+1)*pow(x,2*n)/(float)giaithua(2*n) +phanso(n-1,x);
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





