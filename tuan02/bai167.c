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
    printf("\nSo co toan chu so le va lon nhat trong day la: %d",gt);
    else printf("\nDay khong co so thoa dieu kien");
}
int timgiatri(int *p,int n)
{
    int i,max=0,index;
    for(i=0;i<n;i++)
    {
        if(sotoansole(*(p+i))==1) {max = *(p+i);index =i;break;}
    }
    for(i=index+1;i<n;i++)
    {
        if(sotoansole(*(p+i))==1 && *(p+i)>max) max = *(p+i);
    }
    if(max!=0) return max;
    else return 0;
}

int sotoansole(int n)
{
  int m;
  while(n!=0)
  {
      m = n%10;
      if(m%2==0) return 0;
      n = n/10;
  }
  return 1;
}




