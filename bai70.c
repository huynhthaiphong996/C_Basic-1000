#include <stdio.h>
#include <math.h>
int tong(int n);
float phanso(int n);
void main()
{
    int n;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);

    s = (float)phanso(n);

    printf("\nKet qua: s = %f",s);
}


float phanso(int n)
{
    if(n==0) return 0;
    else return pow(-1,n+1)*1/(float)(tong(n))+phanso(n-1);
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


