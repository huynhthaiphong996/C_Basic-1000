#include <stdio.h>

void main()
{
    int n,i,j;
    char *a[] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    do
    {
        printf("Nhap n (so nguyen co 2 chu so):");
        scanf("%d",&n);
    }while(n<10 || n>99);
    i = n/10;
    j= n%10;

    if(i==1)
    {
        if(j==1)  printf("\nCach doc %d: muoi",n);
        else printf("\nCach doc %d: muoi %s",n,*(a+j));
    }
    else
    {
        if(j==0) printf("\nCach doc %d: %s muoi",n,*(a+i));
        printf("\nCach doc %d: %s muoi %s",n,*(a+i),*(a+j));
    }


}

