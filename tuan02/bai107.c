#include <stdio.h>
void main()
{
    int n,x;
    float s;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("Nhap x:");
    scanf("%d",&x);
    s = pow(x,1/(float)n);
    printf("\nKet qua: S(x) = %f",s);
}
