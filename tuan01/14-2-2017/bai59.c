#include <stdio.h>
#include <math.h>
void main()
{
    unsigned long n,s=1,dem=1,m;
    int i,j;
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
    if((dem-1)==1) printf("\nSo nguyen duong %d khong phai so doi xung!",n);
    else{

        i=j=(dem-1)/2;
        if((dem-1)%2==0)
        {
            if((dem-1)>2) j++;
            else i--;
        }
        else {i--;  j++;}

        while(i<=0 && j<dem-1)
        {
            if(a[i]!=a[j]) {printf("\nSo nguyen duong %d khong phai so doi xung!",n); return;}
            i--;j++;
        }
        printf("\nSo nguyen duong %d la so doi xung!",n);
    }

}


