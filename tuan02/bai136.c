#include <stdio.h>
#include <malloc.h>
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
    printf("\nGia tri chan cuoi cung cua day da nhap la: %d",chan);

}
int timgiatri(int *p,int n)
{
    int i,temp,index =0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0){ temp = *(p+i); index++;}
    }
    if(index == 0) return -1;
    else return temp;
}



