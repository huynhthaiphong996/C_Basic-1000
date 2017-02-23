#include <stdio.h>
#include <malloc.h>
void main()
{
    int n,*p,i,x,y,gt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    printf("\nNhap gioi han x:");
    scanf("%d",&x);
    printf("\nNhap gioi han y:");
    scanf("%d",&y);
    gt  = timgiatri(p,n,x,y);
    printf("\nGia tri dau tien xuat hien trong khoang [%d,%d] la: %d",x,y,gt);

}
int timgiatri(int *p,int n,int x,int y)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=x && *(p+i)<=y) return *(p+i);
    }
    return -1;
}
