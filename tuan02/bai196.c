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

    printf("\nCac gia tri am trong day la:");
    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) printf("%d ",*(p+i));
    }

}


