#include <stdio.h>
void main()
{
    FILE *f;
    char kt,ten[50];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"r");

     while((kt=getc(f))!=EOF)
        printf("%c",kt);

    fclose(f);
}
