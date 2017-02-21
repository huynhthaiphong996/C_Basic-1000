#include <stdio.h>
#include <malloc.h>
void main()
{
    int *p,n,min,i;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    min = timvitri(p,n);
    printf("\nVi tri cua phan tu co gia tri nho nhat day da nhap la: %d",min);

}
int timvitri(int *p,int n)
{
    int i,min,index;
    min = *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)<min) {min = *(p+i); index = i+1;}
    }
    return index;
}

