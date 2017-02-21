#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,s=1,dem=1,m;
    int i;
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
    if((dem-1)==1) printf("\n So nguyen duong %d co 1 chu so!",n);
    else
    {
        int temp =a[dem-2];
        for(i=dem-2;i>=0;i--)
        {
            if(temp>a[i]) {printf("\nSo nguyen duong %d khong tang dan!",n);return;}
            temp = a[i];
        }
    }

   printf("\nSo nguyen duong %d tang dan tu trai sang phai!",n);


}



