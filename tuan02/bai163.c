#include <stdio.h>
#include <malloc.h>
#include <math.h>
void main()
{
    int n,*p,i,gt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    gt  = timgiatri(p,n);
    if(gt!=-1)
    printf("\nSo chinh phuong dau tien cua day la: %d",gt);
    else printf("\nDay khong co so chinh phuong");
}
int timgiatri(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(sochinhphuong(*(p+i))==1) return *(p+i);
    }
    return -1;
}

int sochinhphuong(int n)
{
    if(n==1) return 0;
    if((int)sqrt(n)==sqrt(n)) return 1;
    else return 0;
}

