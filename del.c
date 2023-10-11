#include<stdio.h>
int main()
{
    int i,j,size,a[100],p;
    printf("enter the number:");
    scanf("%d",&size);
    if(size<=100)
    {
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }
        printf("enter the position:");
        scanf("%d",&p);
        for(i=p;i<size-1;i++)
        {
            a[i]=a[i+1];
        }
            size--;
        for(i=0;i<size;i++)
        {
            printf("%d",a[i]);
        }
    }
    return 0;
}