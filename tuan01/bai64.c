#include <stdio.h>
void main()
{
    int a,b;
    float x;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    if(a==0 && b==0) printf("\nPt co vo so nghiem!");
    else if(a==0 && b!=0) printf("\nPt vo nghiem!");
    else printf("\nNghiem cua pt la: x = %f",-b/(float)a);

}
