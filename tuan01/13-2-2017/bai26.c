#include <stdio.h>
void main()
{
    int n,i,s=1;
    printf("Nhap n:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
         if(i%2!=0)   s*=i;
        }
    }
    printf("\nTich cac uoc so le cua %d la: s = %d",n,s);
}


