#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i;
    int *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    printf("\nCac vi tri ma gt cua no la so chinh phuong la:");
    for(i=0;i<n;i++)
    {
        if(sochinhphuong(*(p+i))==1) printf("%d ",i+1);
    }

}

int sochinhphuong(int n)
{
   if((int)sqrt(n)==sqrt(n)) return 1;
   else return 0;
}

