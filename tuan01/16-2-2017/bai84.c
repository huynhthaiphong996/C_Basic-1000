#include <stdio.h>
void main()
{
    float a,b;
    printf("Giai va bien luan pt bac I : ax+b=0\n");
    printf("\nTH1: a#0, pt co nghiem duy nhat x= -b/a");
    printf("\nTH2: a=0,\n *b=0,pt co dang 0.x=0 dc nghiem voi moi x thuoc R =>pt co vo so nghiem\n *b#0, Khong co gia tri nao cua x nhan voi 0 dc mot so khac 0 => pt vo nghiem");
    printf("\nNhap a:");
    scanf("%f",&a);
    printf("\nNhap b:");
    scanf("%f",&b);

    if(a==0)
    {
        if(b==0) printf("\nPT co vo so nghiem!");
        else printf("\nPt vo nghiem!");
    }
    else printf("\nNghiem cua pt la: x = %f",-b/(a));

}
