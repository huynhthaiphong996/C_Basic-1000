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

    printf("\nCac phan tu lon hon gt tuyet doi cua pt lien sau no la:");
    for(i=0;i<n-1;i++)
    {
        if(*(p+i)>abs(*(p+i+1))) printf("%d ",*(p+i));
    }
}



