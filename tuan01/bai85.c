#include <stdio.h>
void main()
{
    int n,x;
    do
    {
        printf("Nhap thang:");
        scanf("%d",&n);
    }while(n<=0 || n>=13);

   if(n<=3) x=1;
    else if(n<=6) x=2;
    else if(n<=9) x=3;
    else x=4;
   printf("\n%d thuoc quy %d",n,x);
}
