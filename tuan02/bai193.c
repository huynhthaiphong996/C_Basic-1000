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

    printf("\nCac gia tri co dang 3^k trong day la:");
    for(i=0;i<n;i++)
    {
        if(kiemtrachuso(*(p+i))==1) printf("%d ",*(p+i));
    }

}
int kiemtrachuso(int n)
{
    int m=1;
    while(m<n)
    {
        m*=3;
    }
    if(m==n) return 1;
    else return 0;
}




