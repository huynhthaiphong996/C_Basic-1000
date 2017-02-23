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
    printf("\nGia tri am cuoi cung lon hon -1 la: %f",gt);

}

float timgiatri(float *p,int n)
{
    int i;
    float temp;
    for(i=0;i<n;i++)
    {
        if(*(p+i)<0 && *(p+i)>-1) temp= *(p+i);
    }
    if(temp!=0) return temp;
    else return -1;
}



