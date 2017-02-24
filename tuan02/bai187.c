#include <stdio.h>
#include <malloc.h>
float timgtduong(float *p, int n);
void main()
{
    int n,i;
    float *p,duong;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    duong = timgtduong(p,n);
    printf("\nCac vi tri co gia tri bang gt duong nho nhat trong day la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)==duong ) printf("%d ",i+1);
    }

}

float timgtduong(float *p, int n)
{
    int i;
    float min;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>0) {min = *(p+i);break;}
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)>0 && *(p+i)<min) min = *(p+i);
    }
    return min;

}
