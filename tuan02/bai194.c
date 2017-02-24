#include <stdio.h>
#include <malloc.h>

int timgiatri(int *p,int n,int x,int k);
void main()
{
    int n,i;
    int *p,gt;
    do
    {
        printf("Nhap so phan tu cua day:");
        scanf("%d",&n);
    }while(n<=2);

    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }
    printf("\nCac cap gia tri gan nhau nhat:");
    for(i=1;i<n;i++)
    {
           gt = timgiatri(p,n,*(p+i),i);
           printf("(%d,%d) ",*(p+i),gt);
    }

}

int timgiatri(int *p,int n,int x,int k)
{
    int i,indext=0,indexp=0;
    int temptrai,tempphai;
    temptrai = tempphai = x-*p;
    if(temptrai<0) temptrai = -temptrai;
    if(tempphai>0) tempphai = -tempphai;
    for(i=0;i<n;i++)
    {
        if(i==k) continue;

        if(*(p+i)>=x && tempphai<(x - *(p+i)) ) {tempphai = x -*(p+i); indexp = i;}
        else if(*(p+i)<x && temptrai>(x - *(p+i))) {temptrai = x - *(p+i);indext = i;}
    }

    if(tempphai<0) tempphai = -tempphai;
    if(temptrai<0) temptrai = -temptrai;

    if(tempphai<temptrai) return *(p+indexp);
    else return *(p+indext);

}


