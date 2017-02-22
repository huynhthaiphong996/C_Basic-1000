#include <stdio.h>
#include <malloc.h>
#include <math.h>
int timgiatri(int *p,int n);
void main()
{
    int n,i;
    int *p,nt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    nt = timgiatri(p,n);
    printf("\nSo nguyen to cuoi cung cua day da nhap la: %d",nt);

}
int timgiatri(int *p,int n)
{
    int i,temp,index=0;

    for(i=0;i<n;i++)
    {
        if(kiemtrant(*(p+i))==1) { temp = *(p+i); index++;}
    }
    if(index!=0) return temp;
    else return -1;

}

int kiemtrant(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}

