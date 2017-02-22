#include <stdio.h>
#include <malloc.h>
float timgiatri(float *p,int n);
void main()
{
    int n,i;
    float *p,min;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    min = timgiatri(p,n);
    printf("\nGia tri nho nhat day da nhap la: %f",min);

}
float timgiatri(float *p,int n)
{
    int i,k;
    float min=*p;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<min) min = *(p+i);
    }

    return min;

}



