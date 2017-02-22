#include <stdio.h>
#include <malloc.h>
float timgiatri(float *p,int n);
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
    am = timgiatri(p,n);
    printf("\nGia tri am dau tien day da nhap la: %f",am);

}
float timgiatri(float *p,int n)
{
    int i,k;
    float min=-1;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) {min = *(p+i); return min;}
    }
    return -1;
}


