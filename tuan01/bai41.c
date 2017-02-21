#include <stdio.h>
float phanso(int n);
void main()
{
    int n;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);
    s = phanso(n);

     printf("\nKet qua: s = %f",s);
}

float phanso(int n)
{
    if(n==0) return 0;
    else return 1/(1+phanso(n-1));
}
