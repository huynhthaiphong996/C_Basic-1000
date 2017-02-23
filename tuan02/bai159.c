#include <stdio.h>
#include <malloc.h>

float timgiatri(float *p,int n);
void main()
{
    int n,i;
    float *p,gt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }


    gt = timgiatri(p,n);
    printf("\nGia tri dau tien lon hon 2003 la: %f",gt);

}

float timgiatri(float *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>2003) return *(p+i);
    }
    return -1;
}


