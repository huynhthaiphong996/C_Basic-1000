#include <stdio.h>
void main()
{
    int i;
    printf("Cac so le nho hon 100 la:");
    for(i=1;i<100;i++)
    {
        if(i==5 ||i==7 ||i==93) continue;
        else
        {
            if(i%2!=0) printf("%d ",i);
        }
    }
}
