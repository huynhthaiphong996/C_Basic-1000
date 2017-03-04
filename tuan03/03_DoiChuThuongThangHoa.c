#include <stdio.h>
#include <string.h>
void main()
{
    FILE *fp;
    char kt[255],ten[30];

    printf("\nNhap ten file:");
    scanf("%s",&ten);
    fp = fopen(ten,"r");

    fgets(kt,255,fp);
    strupr(kt);
    fclose(fp);

    fp = fopen(ten,"w");
    fputs(kt,fp);
    fclose(fp);

}


