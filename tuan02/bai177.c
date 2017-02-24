#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i,x,y;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }

    printf("\nNhap x:");
    scanf("%d",&x);
    printf("\nNHap y:");
    scanf("%d",&y);

    printf("\nCac phan tu thuoc doan [%d,%d] la:",x,y);
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=x && *(p+i)<=y) printf("%f ",*(p+i));
    }
}

