#include <stdio.h>
void main()
{
    int thang,nam,ngay,dem=0,i;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Nhap ngay:");
    scanf("%d",&ngay);
    printf("Nhap thang:");
    scanf("%d",&thang);
    printf("Nhap nam:");
    scanf("%d",&nam);

    if(thang>2 && nam%4==0)
    {
        if(nam%100==0 && nam%400!=0) ngay = ngay;
         else { a[1]++;}
    }

    for(i=0;i<thang-1;i++)
    {
        dem+=a[i];
    }

    dem+=ngay;

    printf("\nla ngay thu %d cua nam",dem);
}


