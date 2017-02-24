#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,i,x,y;
    int *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    printf("\nNhap x:");
    scanf("%d",&x);
    printf("\nNhap y:");
    scanf("%d",&y);

    printf("\nCac phan tu chan thuoc doan [%d,%d] la:",x,y);
    for(i=0;i<n;i++)
    {
        if(*(p+i)%2==0 &&*(p+i)>=x && *(p+i)<=y) printf("%d ",*(p+i));
    }
}


