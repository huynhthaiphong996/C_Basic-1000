#include <stdio.h>
void main()
{
    FILE *f;
    int a[50],i=0,j=0,min;
    char ten[50];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"r");
    do
    {
        fscanf(f,"%d",&a[i]);
        i++;
    }while(getc(f)!=EOF);
    fclose(f);
    while(1)
    {
        if(a[j]>0) {min = a[j]; break;}
    }
    for(j=0;j<i;j++)
    {
        if(a[j]>0 && min>a[j]) min = a[j];
    }
    printf("\nSo duong nho nhat la: %d",min);

}


