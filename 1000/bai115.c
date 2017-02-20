#include <stdio.h>
void main()
{
    char ten[20];
    float toan,van,dtb;
    printf("Nhap ho va ten:");
    gets(ten);
    printf("Diem toan:");
    scanf("%f",&toan);
    fflush(stdin);
    printf("Diem van:");
    scanf("%f",&van);
    fflush(stdin);
    printf("\nThong tin sinh vien:\nNhap ho va ten:%s",ten);
    printf("\nDiem toan: %f",toan);
    printf("\nDiem van: %f",van);
    printf("\nDiem trung binh: %f",(toan+  van)/2);
}
