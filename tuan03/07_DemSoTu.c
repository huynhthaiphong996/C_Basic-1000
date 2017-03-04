#include <stdio.h>
void main()
{
    FILE *f;
    int dem=0;
    char kt,ten[50],tu[255];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"r");
    while(fscanf(f,"%s",tu)!=EOF)
        dem++;

    fclose(f);
    printf("\nSo tu trong file: %d",dem);
}

