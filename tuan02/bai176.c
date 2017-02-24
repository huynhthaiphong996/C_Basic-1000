#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    printf("\nCac phan tu mang gia tri am trong mang la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) printf("%f ",*(p+i));
    }
}
