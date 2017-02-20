#include <stdio.h>

void main()
{
    int n,m=1,s=1;
    do
    {
        printf("Nhap n:");
        scanf("%d",&n);
    }while(n<=0);

    while(s<n)
    {
        s+=++m;
    }

    printf("\nSo nguyen duong m nho nhat thoa dieu kien la:%d",m-1);
}

