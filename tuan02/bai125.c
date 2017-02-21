#include <stdio.h>
#include <malloc.h>
#include <math.h>
int demsonguyento(int *p,int n);
int kiemtrasont(int n);
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

   printf("\nCac so nguyen to nho hon 100 trong day la: %d",demsonguyento(p,n));
}
int demsonguyento(int *p,int n)
{
    int i,index=0;

    for(i=0;i<n;i++)
    {
        if(kiemtrasont(*(p+i))==1 && *(p+i)<100) index++;
    }
    return index;
}

int kiemtrasont(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}


