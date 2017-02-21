#include <stdio.h>
void main()
{
    int n,x,s;
    printf("Nhap x:");
    scanf("%d",&x);

    printf("\nNhap n:");
    scanf("%d",&n);
    s = tong(x,n);

    printf("\nKet qua: s = %d",s);

}

int tong(int x,int n)
{
    if(n==0) return 0;
    else return pow(-1,n)*pow(x,2*n)+tong(x,n-1);
}

