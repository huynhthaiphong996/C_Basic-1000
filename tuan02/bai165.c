#include <stdio.h>
#include <malloc.h>

void main()
{
    int n,*p,i,gt;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri cua phan tu a[%d]:",i+1);
        scanf("%d",p+i);
    }

    gt  = timgiatri(p,n);
    if(gt!=-1)
    printf("\nSo dau tien cua day co chu so dau tien la so le la: %d",gt);
    else printf("\nDay khong co so thoa dieu kien");
}
int timgiatri(int *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(sodtle(*(p+i))==1) return *(p+i);
    }
    return -1;
}

int sodtle(int n)
{
    while(n>=10)
    {
        n=n/10;
    }
    if(n%2==1) return 1;
    else return 0;
}


