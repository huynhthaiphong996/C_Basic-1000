#include <stdio.h>
#include <malloc.h>
float timmin(float *p, int n);
float timmax(float *p, int n);
void main()
{
    int n,i,min,max;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    if((int)timmin(p,n)==timmin(p,n)) min = (int)timmin(p,n);
    else min = (int)timmin(p,n)-1;
    if((int)timmax(p,n)==timmax(p,n)) max =(int)timmax(p,n);
    else max = (int)timmax(p,n)+1;
    printf("\nDoan chua tat ca cac gia tri cua day: [%d,%d]",min,max);

}

float timmin(float *p, int n)
{
    int i;
    float min=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)<min) min = *(p+i);
    }
    return min;
}

float timmax(float *p, int n)
{
    int i;
    float max=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max) max = *(p+i);
    }
    return max;
}
