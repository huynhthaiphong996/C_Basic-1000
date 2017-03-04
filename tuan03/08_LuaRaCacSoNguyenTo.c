#include <stdio.h>
void main()
{
    FILE *f;
    int a[50],i=0,j;
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
    printf("\nCac So nguyen to trong file:");
    for(j=0;j<i;j++)
    {
        if(ktnguyento(a[j])==1) printf("%d ",a[j]);
    }

}

int ktnguyento(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return 0;
    }
    return 1;
}
