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
    if(gt!=0)
    printf("\nSo co dang 5^k va lon nhat day la: %d",gt);
    else printf("\nDay khong co so thoa dieu kien");
}
int timgiatri(int *p,int n)
{
    int i,max=0,index;
    for(i=0;i<n;i++)
    {
        if(somu(*(p+i))==1) {max = *(p+i);index =i;break;}
    }
    for(i=index+1;i<n;i++)
    {
        if(somu(*(p+i))==1 && *(p+i)>max) max = *(p+i);
    }
    if(max!=0) return max;
    else return 0;
}

int somu(int n)
{
    int m=1;
    while(m<n)
    {
        m*=5;
    }
    if(m==n) return 1;
    else return 0;
}




