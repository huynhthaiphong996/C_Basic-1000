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

    printf("\nCac phan tu cuc dai trong day la:");
    if(*p>*(p+1)) printf("%f ",*p);
    for(i=1;i<n-1;i++)
    {
        if(*(p+i)>*(p+i+1) && *(p+i)>*(p+i-1)) printf("%f ",*(p+i));
    }
    if(*(p+n-1)>*(p+n-2)) printf("%f ",*(p+n-1));
}




