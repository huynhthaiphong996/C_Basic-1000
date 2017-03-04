#include <stdio.h>
void main()
{
    FILE *f;
    int a[50],i=0,j,max;
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
    max = a[0];
    for(j=1;j<i;j++)
    {
        if(max<a[j]) max = a[j];
    }
    printf("\nSo lon nhat la: %d",max);

}

