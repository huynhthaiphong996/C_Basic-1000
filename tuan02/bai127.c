#include <stdio.h>
#include <malloc.h>
void sapxep(float *p,int n);
void main()
{
    int n,i;
    float *p;
    printf("Nhap so phan tu cua day:");
    scanf("%d",&n);
    p = (float*)malloc(n*sizeof(float));
    for(i=0;i<n;i++)
    {
        printf("\nNhap gia tri phan tu a[%d]:",i+1);
        scanf("%f",p+i);
    }

    sapxep(p,n);
    printf("\nDay da sap xep:");
     for(i=0;i<n;i++)
        {
            printf("%f ",*(p+i));
        }
}
void sapxep(float *p,int n)
{
    int i,j,key;
    for(i=0;i<n;i++)
    {
        int index;
        key =*(p+i);
        for(j=i+1;j<n;j++)
        {
            if(key>*(p+j)) {key = *(p+j);  index =j;}
        }
        *(p+index) = *(p+i);
        *(p+i) = key;
    }


}


