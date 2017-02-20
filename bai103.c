#include <stdio.h>
void main()
{
    int thang,nam,ngay;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};

    printf("Nhap ngay:");
    scanf("%d",&ngay);
    printf("Nhap thang:");
    scanf("%d",&thang);
    printf("Nhap nam:");
    scanf("%d",&nam);


    ngay--;
    if(ngay<1)
    {
            thang--;

        if(thang==2 && nam%4==0)
        {
            if(nam%100==0 && nam%400!=0) ngay = ngay;
             else { a[1]++;}
        }
        else if(thang<1)
            {
                thang =12;
                nam--;
            }

        ngay=a[thang-1];
    }

    printf("\nNgay truoc ngay da nhap la: ngay %d thang %d nam %d",ngay,thang,nam);
}


