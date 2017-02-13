#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,s=1,i,dem=1,m;
    unsigned long a[50];
    printf("Nhap n:");
    scanf("%d",&n);
    m=n;
    while(m>0)
    {
        a[dem-1]= m%10;
        m= m/10;
        dem++;
    }

    for(i=0;i<dem-1;i++)
    {
        if(a[i]%2!=0)
        {
            printf("\nSo nguyen duong %d co chua chu so le!",n);
            return;
        }
    }
    printf("\nSo nguyen duong %d co toan chu so chan!",n);


}


