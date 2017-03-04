#include <stdio.h>
void main()
{
    FILE *f;
    int dem=0;
    char kt,ten[50],dong[255];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"r");
    while(fgets(dong,255,f))
        dem++;

    fclose(f);
    printf("\nSo Dong trong file: %d",dem);
}
