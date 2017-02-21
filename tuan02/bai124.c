#include <stdio.h>
#include <malloc.h>
void main()
{
    int *p,n,i;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    if(kiemtra(p,n)==1)printf("\nTrong day ton tai phan tu chan co gia tri nho hon 2004.");
    else printf("\nTrong day khong ton tai phan tu chan co gia tri nho hon 2004.");
}
int kiemtra(int *p,int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0 && *(p+i)<2004) return 1;
    }
    return 0;
}


