#include <stdio.h>
void main()
{
    int n,i,s=0;
    do
    {
        printf("Nhap n:");
        scanf("%d",&n);
    }while(n<=0);
    for(i=1;i<n;i++)
    {
        if(i%2!=0) s+=i;
    }
    printf("\nTong cac so le nho hon %d la: s= %d",n,s);
}
