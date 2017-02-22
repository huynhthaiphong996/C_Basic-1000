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
    printf("\nGia tri duong nho nhat day da nhap la: %f",min);

}
float timgiatri(float *p,int n)
{
    int i,k;
    float min=-1;

    for(i=0;i<n;i++)
    {
        if(*(p+i)>=0) {min = *(p+i); k=i;break;}
    }
    for(k=k+1;k<n;k++)
    {
        if(*(p+k)>=0 && *(p+k)<min) min = *(p+k);
    }
    if(min>=0) return min;
    return -1;
}


