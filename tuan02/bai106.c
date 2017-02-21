#include <stdio.h>


void main()
{
    int n,i,j,k;
    char *a[] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin"};
    do
    {
        printf("Nhap n (so nguyen co 3 chu so):");
        scanf("%d",&n);
    }while(n<100 || n>999);

    k = n/100;
    i= (n/10)%10;
    j = n%10;

    if(j==0 && i==0)
        {printf("\nCach doc %d: %s tram",n,*(a+k));
        return;
    }
     if(i==1)
    {
        if(j==1)  printf("\nCach doc %d: %s tram muoi",n,*(a+k));
        else printf("\nCach doc %d: %s tram muoi %s",n,*(a+k),*(a+j));
    }
    else
    {
        if(j==0) printf("\nCach doc %d: %s tram %s muoi",n,*(a+k),*(a+i));
       else  printf("\nCach doc %d: %s tram %s muoi %s",n,*(a+k),*(a+i),*(a+j));
    }


}


