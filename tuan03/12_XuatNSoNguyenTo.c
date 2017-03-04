#include <stdio.h>
void main()
{
    FILE *f;
    int a[50],i=0,j=1,n;
    char ten[50];
    printf("\nNhap ten file:");
    scanf("%s",&ten);
    f = fopen(ten,"a");
    printf("\nNhap n:");
    scanf("%d",&n);
    while(i<n)
    {
        while(1)
        {
            if(ktnguyento(j)==1) {a[i]=j;break;}
            else j++;

        }
        j++;
        i++;
    }
    for(i=0;i<n;i++)
    {
       fprintf(f,"%d ",a[i]);
    }
    fclose(f);

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
