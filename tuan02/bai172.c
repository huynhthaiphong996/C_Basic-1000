#include <stdio.h>
#include <malloc.h>

void main()
{
    int n,*p,i,gt,temp,index,bcnn;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    for(i=0;i<n;i++)
    {
        if(*(p+i)==0) {printf("\nKhong co gia tri nao thoa dieu kien!"); return;}
    }

    gt  = timmax(p,n);
    index = gt;

    do
    {
        temp =0;
        for(i=0;i<n;i++)
        {
            if(boinhonhat(n,index)%*(p+i)==0) temp++;
        }
        index++;
    }while(temp<n);

    bcnn = boinhonhat(gt,index+1);
    printf("\nBoi chung nho nhat cua tat ca phan tu trong day la: %d",bcnn);

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

int boinhonhat(int n, int index)
{
    int i;
    for(i=index;;i++)
    {
        if(i%n==0) return i;
    }

}


