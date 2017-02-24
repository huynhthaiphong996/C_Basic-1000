#include <stdio.h>
#include <malloc.h>
float timgtam(float *p, int n);
void main()
{
    int n,i;
    float *p,am;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    am = timgtam(p,n);
    printf("\nCac vi tri co gia tri bang gt am dau tien trong day la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)==am ) printf("%d ",i+1);
    }

}

float timgtam(float *p, int n)
{
    int i;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) return *(p+i);
    }

}


