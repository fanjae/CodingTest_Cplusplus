#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[20],b[20],sum=0,sum2=0,i,winner=0,winner2=0;
    for(i=1;i<=10;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=1;i<=10;i++)
    {
       scanf("%d",&b[i]);
    }
    for(i=1;i<=10;i++)
    {
      if(a[i] > b[i])
      {
        sum += 3;
        winner=1;
        winner2=0;
      }
      else if(a[i] == b[i])
      {
        sum += 1;
        sum2 += 1;
      }
      else if(a[i] < b[i])
      {
        sum2 += 3;
        winner2=1;
        winner=0;
      }
    }
    printf("%d %d\n",sum,sum2);
    if(sum > sum2)
    {
           printf("A");
    }
    else if(sum2 > sum)
    {
         printf("B");
    }
    else
    {
         if(winner==1)
         {
                  printf("A");
         }
         else if(winner2==1)
         {
                  printf("B");
         }
         else
         {
                  printf("D");
         }
    }
}