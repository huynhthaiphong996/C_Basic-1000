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

    printf("\nCac phan tu chan co it nhat mot lan can cung co gt chan:");
    if(*p%2==0 && *(p+1)%2==0) printf("%d ",*p);

    for(i=1;i<n-1;i++)
    {
        if(*(p+i)%2==0 && (*(p+i-1)%2==0 || *(p+i+1)%2==0)) printf("%d ",*(p+i));
    }

    if(*(p+n-1)%2==0 && *(p+n-2)%2==0) printf("%d ",*(p+n-1));
}




