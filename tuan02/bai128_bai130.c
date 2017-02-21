#include <stdio.h>
#include <malloc.h>
void nhap(float *p,int n);
void xuat(float *p,int n);
void main()
{
    int n,i;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    nhap(p,n);
    printf("\nDay da nhap:");
    xuat(p,n);

}
void nhap(float *p, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
}

void xuat(float *p, int n)
{
    int i;
    for(i=0;i<n;i++)
        {
            printf("%f ",*(p+i));
        }
}

