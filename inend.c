#include<stdio.h>
int main()
{
    int i,a[100],size,num;
    printf("enter the number:");
    scanf("%d",&size);
    if(size>100)
       {
           printf("enter vaild size");
       }
    else
    {
      printf("enter the elements in the array:");
      for(i=0;i<size;i++)
      {
        scanf("%d",&a[i]);
      }
      printf("enter num to insert:");
      scanf("%d",&num);
        a[size]=num;
        size++;
        printf("elements after inserting:");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
     }
     
    
     return 0;
}