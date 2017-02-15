#include <stdio.h>

void main()
{
    int n=1,s=1;
    while(s<10000)
    {
        s+=++n;
    }

    printf("\nSo nguyen duong n nho nhat thoa dieu kien la:%d",n);
}
