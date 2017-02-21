#include <stdio.h>
#include <malloc.h>
float tinhtong(float *p,int n);
void main()
{
    int n,i;
    float *p,s;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    s = tinhtong(p,n);
    printf("\nTong cac phan tu co gia tri am trong day da nhap la: %f",s);

}
float tinhtong(float *p,int n)
{
    int i;
    float s=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) s+= *(p+i);
    }
    return s;
}

