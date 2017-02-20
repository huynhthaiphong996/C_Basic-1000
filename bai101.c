#include <stdio.h>
void main()
{
    int thang,nam,ngay;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("Nhap thang:");
    scanf("%d",&thang);
    printf("Nhap nam:");
    scanf("%d",&nam);
    ngay = a[thang-1];
    if(thang==2 && nam%4==0)
    {
        if(nam%100==0 && nam%400!=0) ngay = ngay;
         else ngay++;
    }
    printf("\nthang %d nam %d co: %d ngay.",thang,nam,ngay);
}
