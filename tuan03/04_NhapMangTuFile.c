#include <stdio.h>
void main()
{
    FILE *f;
    int a[50],i=0,j;
    char tenf[50];
    printf("Nhap ten file:");
    scanf("%s",&tenf);
    f = fopen(tenf,"r");

    do
    {
        fscanf(f,"%d",&a[i]);
        i++;
    }while(getc(f)!=EOF);

    fclose(f);
    printf("\nMang trong file la:");
    for(j=0;j<i;j++)
        printf("%d ",a[j]);
}
