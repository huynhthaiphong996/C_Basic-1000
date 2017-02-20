#include <stdio.h>
void main()
{
    int i,n=1;

    while(n<=10)
    {
        printf("\n-Bang cuu chuong %d:",n);
        for(i=1;i<=10;i++)
        {
            printf("\n\t%dx%d=%d",n,i,n*i);
        }
    n++;

    }
}
