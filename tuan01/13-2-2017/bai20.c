#include <stdio.h>
void main()
{
    int n,i;
    printf("Nhap n:");
    scanf("%d",&n);
    printf("\nCac uoc so cua %d la:",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0) printf("%d  ",i);
    }
}
