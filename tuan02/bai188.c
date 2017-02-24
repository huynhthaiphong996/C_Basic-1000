#include <stdio.h>
#include <malloc.h>
int timgtchan(int *p, int n);
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
    chan = timgtchan(p,n);
    printf("\nCac vi tri co gia tri bang gt chan lon nhat trong day la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)==chan ) printf("%d ",i+1);
    }

}

int timgtchan(int *p, int n)
{
    int i;
    int chan;
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0) {chan = *(p+i);break;}
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0 && *(p+i)>chan) chan = *(p+i);
    }
    return chan;

}

