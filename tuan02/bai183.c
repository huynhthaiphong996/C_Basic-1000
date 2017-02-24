#include <stdio.h>
#include <malloc.h>
float timmax(float *p, int n);
void main()
{
    int n,i;
    float *p,max;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    max = timmax(p,n);
    printf("\nCac vi tri co gia tri lon nhat trong day la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)==max ) printf("%d ",i+1);
    }

}

float timmax(float *p, int n)
{
    int i;
    float max = *p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>max) max = *(p+i);
    }
    return max;
}

