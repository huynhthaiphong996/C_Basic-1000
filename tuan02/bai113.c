#include <stdio.h>
//float giaithua(int n);
void main()
{
    int n=0;
    float x,y,temp,s=0,esp = 3.14;
    printf("Nhap x:");
    scanf("%f",&x);
    y=x;
    x = (float)y*esp/((float)180);

    do
    {
        temp = (pow((-1),n)*pow(x,2*n+1))/(float)((giaithua(2*n+1)));
        s+=temp;
        n++;
    }while(temp>0.00001);
    printf("sin(%.1f) = %f",y,s);
}
int  giaithua(int n)
{
    int i;
    int s=1;
    for(i=1;i<=n;i++)
    {
        s*=i;
    }
    return s;
}
