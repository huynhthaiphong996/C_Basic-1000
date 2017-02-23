#include <stdio.h>
#include <malloc.h>

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

    gt  = timmax(p,n);
    gt++;
    while(songuyento(gt)==0)
    {
        gt++;
    }
    printf("\nSo nguyen to nho nhat lon hon moi gia tri trong day la: %d",gt);

}
int timmax(int *p,int n)
{
   int i,max;
   max = *p;
   for(i=1;i<n;i++)
   {
       if(*(p+i)>max) max = *(p+i);
   }
   return max;
}

int songuyento(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
