#include <stdio.h>
#include <malloc.h>

void main()
{
    int n,*p,i,gt,temp,index,ucln;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    gt  = timmin(p,n);

    index = gt;

    do
    {
        temp =0;
        for(i=0;i<n;i++)
        {
            if((*(p+i))%(uoclonnhat(gt,index))==0) temp++;
        }
        index--;
    }while(temp<n);

    ucln = uoclonnhat(gt,index+1);
    printf("\nUoc chung lon nhat cua tat ca phan tu trong day la: %d",ucln);

}
int timmin(int *p,int n)
{
   int i,min;
   if(*p!=0) min = *p;
   else min = *(p+1);
   for(i=0;i<n;i++)
   {
       if(*(p+i)==0) continue;
       else if(*(p+i)<min) min = *(p+i);
   }
   return min;
}

int uoclonnhat(int n, int index)
{
    int i;
    for(i=index;i>1;i--)
    {
        if(n%i==0) return i;
    }
    return 1;
}

