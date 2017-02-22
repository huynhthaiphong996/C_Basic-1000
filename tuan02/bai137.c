#include <stdio.h>
#include <malloc.h>
int timvitri(float *p,int n);
void main()
{
    int n,i,min;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    min = timvitri(p,n);
    printf("\nVi tri cua phan tu co gia tri nho nhat day da nhap la: %d",min);

}
int timvitri(float *p,int n)
{
    int i,index;
    float min = *p;
    for(i=1;i<n;i++)
    {
        if(*(p+i)<min) {min = *(p+i); index = i+1;}
    }
    return index;
}


