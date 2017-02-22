#include <stdio.h>
#include <malloc.h>
#include <math.h>
int timgiatri(int *p,int n);
void main()
{
    int n,i;
    int *p,ht;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    ht = timgiatri(p,n);
    printf("\nSo hoan thien cuoi cung cua day da nhap la: %d",ht);

}
int timgiatri(int *p,int n)
{
    int i,temp,index = 0;;

    for(i=0;i<n;i++)
    {
        if(sohoanthien(*(p+i))==1) { temp = *(p+i); index++;}
    }
    if(index!=0) return temp;
    else return -1;

}

int sohoanthien(int n)
{
    int i,s=0;
    if(n==1) return 0;
    for(i=1;i<n-1;i++)
    {
        if(n%i==0) s+=i;
    }
    if(s==n) return 1;
    else return 0;
}


