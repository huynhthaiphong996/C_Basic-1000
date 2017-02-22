#include <stdio.h>
#include <malloc.h>
float timgiatri(float *p,int n);
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
    max = timgiatri(p,n);
    printf("\nGia tri lon nhat day da nhap la: %f",max);

}
float timgiatri(float *p,int n)
{
    int i;
    float max;
    max = *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)>max) max = *(p+i);
    }
    return max;
}

