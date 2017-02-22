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
    printf("\nVi tri gia tri am nho nhat day da nhap la: %d",min);

}
int timvitri(float *p,int n)
{
    int i,k;
    float min=0;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) {min = *(p+i); k=i;break;}
    }
    for(i=k+1;i<n;i++)
    {
        if(*(p+i)<0 && *(p+i)<min) {min = *(p+i);k=i;}
    }
    if(min!=0) return k+1;
    return -1;
}



