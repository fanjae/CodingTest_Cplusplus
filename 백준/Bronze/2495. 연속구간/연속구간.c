#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   int max=1,max2=1,max3=1;
   int max4=0,max5=0,max6=0;
   int i,j;
   char a[10],b[10],c[10];
    
   scanf("%s",a);
   scanf("%s",b);
   scanf("%s",c);
    
   for(i=0;i<strlen(a);i++)
   {
      if(a[i]==a[i+1])
      {
         max++;
      }
      else
      {
         max=1;
      }
      if(max > max4)
      {
         max4 = max;
      }  
   }
   for(i=0;i<strlen(b);i++)
   {
      if(b[i]==b[i+1])
      {
         max2++;
      }
      else
      {
         max2=1;
      }
      if(max2 > max5)
      {
         max5 = max2;
      }  
   }
   for(i=0;i<strlen(c);i++)
   {
      if(c[i]==c[i+1])
      {
         max3++;
      }
      else
      {
         max3=1;
      }
      if(max3 > max6)
      {
         max6 = max3;
      }  
   }
   printf("%d\n",max4);
   printf("%d\n",max5);
   printf("%d\n",max6);
    
    
}