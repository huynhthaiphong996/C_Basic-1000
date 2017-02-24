#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i;
    int *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    printf("\nCac vi tri ma gt cua no la so nguyen to la:");
    for(i=0;i<n;i++)
    {
        if(kiemtrant(*(p+i))==1) printf("%d ",i+1);
    }

}

int kiemtrant(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
