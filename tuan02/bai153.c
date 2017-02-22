#include <stdio.h>
#include <malloc.h>
#include <math.h>
int timgiatri(int *p,int n);
void main()
{
    int n,i;
    int *p,chan;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    chan = timgiatri(p,n);
    printf("\nSo chan nho nhat cua day da nhap la: %d",chan);

}
int timgiatri(int *p,int n)
{
    int i,temp,k,index = 0;;

    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0) { temp = *(p+i);k=i; index++;break;}
    }
    for(i=k+1;i<n;i++)
    {
        if(*(p+i)%2==0 && *(p+i)<temp) temp = *(p+i);
    }
    if(index!=0) return temp;
    else return -1;

}

