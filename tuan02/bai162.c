#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i,vt;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }

    vt = timvitri(p,n);
    printf("\nVi tri thoa man dieu kien la: %d",vt);
}

int timvitri(float *p,int n)
{
    int i;
    for(i=1;i<n-1;i++)
    {
        if((*(p+i-1)*(*(p+i+1)))==*(p+i)) return i+1;
    }
    return -1;
}
