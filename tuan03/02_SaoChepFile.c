#include <stdio.h>
void main()
{
    FILE *f,*fc;
    char kt,ten[30];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"r");

    fc = fopen("copy.txt","w");

    while((kt=fgetc(f))!=EOF)
    fputc(kt,fc);
    fclose(fc);fclose(f);
}

