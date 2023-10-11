#include<stdio.h>
int main()
{
    int i,j,a[100],size,num,p;
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
      printf("enter position to insert the given number:");
     scanf("%d",&p);
     if(p<size)
     {
        for(i=size-1;i>=(p-1);i--)
        {
            a[i+1]=a[i];
        }
        a[p]=num;
        size++;
        printf("elements after inserting:");
        for(i=0;i<size;i++)
        {
            printf("%d ",a[i]);
        }
     }
     else
     printf("please enter valid position");

    }
    return 0;
}

  