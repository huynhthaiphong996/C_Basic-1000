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

    if(thang==2 && nam%4==0)
    {
        if(nam%100==0 && nam%400!=0) ngay = ngay;
         else { a[1]++;}
    }
    ngay++;
    if(ngay>a[thang-1])
    {
        thang++;
        ngay=1;
        if(thang>12)
        {
            thang =1;
            nam++;
        }
    }

    printf("\nNgay tiep theo ngay da hap la: ngay %d thang %d nam %d",ngay,thang,nam);
}

