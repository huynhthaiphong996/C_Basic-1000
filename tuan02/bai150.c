#include <stdio.h>
#include <malloc.h>
float timgiatri(float *p,int n);
void main()
{
    int n,i;
    float *p,ammax;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    ammax = timgiatri(p,n);
    printf("\nGia tri am lon nhat day da nhap la: %f",ammax);

}
float timgiatri(float *p,int n)
{
    int i,k,index=0;
    float am;

    for(i=0;i<n;i++)
    {
        if(*(p+i)<0) {am = *(p+i);k=i;index++;break;}
    }
    for(i=k+1;i<n;i++)
    {
        if(*(p+i)<0 && *(p+i)>am) am = *(p+i);
    }
    if(index!=0) return am;
    else return -1;

}




