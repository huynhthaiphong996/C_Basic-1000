#include <stdio.h>
#include <malloc.h>

float timgiatri(float *p,int n,float x);
void main()
{
    int n,i;
    float *p,x,gt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }
    printf("\nNhap x:");
    scanf("%f",&x);

    gt = timgiatri(p,n,x);
    printf("\nGia tri xa gia tri x nhat: %f",gt);

}

float timgiatri(float *p,int n,float x)
{
    int i,indext,indexp;
    float temptrai,tempphai;
    temptrai = tempphai = x-*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)>=x && tempphai>(x - *(p+i)) ) {tempphai = x -*(p+i); indexp = i;}
        else if(*(p+i)<x && temptrai<(x - *(p+i))) {temptrai = x - *(p+i);indext = i;}
    }

    if(tempphai<0) tempphai = -tempphai;
    if(temptrai<0) temptrai = -temptrai;

    if(tempphai>temptrai) return *(p+indexp);
    else return *(p+indext);

}
