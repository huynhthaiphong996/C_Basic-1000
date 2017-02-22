#include <stdio.h>
#include <malloc.h>
float timgiatri(float *p,int n);
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
    duong = timgiatri(p,n);
    printf("\nGia tri duong dau tien cua day da nhap la: %f",duong);

}
float timgiatri(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=0) return *(p+i);
    }
    return -1;
}


