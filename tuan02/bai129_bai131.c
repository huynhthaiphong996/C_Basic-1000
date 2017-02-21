#include <stdio.h>
#include <malloc.h>
void nhap(int *p,int n);
void xuat(int *p,int n);
void main()
{
    int n,i;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    nhap(p,n);
    printf("\nDay da nhap:");
    xuat(p,n);

}
void nhap(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
}

void xuat(int *p, int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            printf("%d ",*(p+i));
        }
}
