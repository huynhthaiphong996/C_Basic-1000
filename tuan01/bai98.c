#include <stdio.h>
void main()
{
    float a,b,c,d,e,f;
    float x,y;
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap c:");
    scanf("%d",&c);
    printf("Nhap d:");
    scanf("%d",&d);
    printf("Nhap e:");
    scanf("%d",&e);
    printf("Nhap f:");
    scanf("%d",&f);

    e=e*a/d;    f=f*a/d; d=a;
    e=b-e;  f=c-f;

    if(e==0 && f==0) {printf("\nHe pt co vo so nghiem x,y thuoc R!");return;}
    else if(e==0 && f!=0){printf("\nHet pt vo nghiem!");return;}
    else{
        y=f/(float)e;
        x=(c-y*b)/(float)a;
        printf("\nKet qua cua he phuong trinh:\nx=%.3f\ny=%.3f",x,y);
    }

}
