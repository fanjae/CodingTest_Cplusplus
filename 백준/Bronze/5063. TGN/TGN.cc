#include <stdio.h>
int main()
{
   int T;
   scanf("%d",&T);
   while(T--)
   {
      int r,e,c,d;
    
      scanf("%d %d %d",&r,&e,&c);
    
   	  d=r+c;
    
      if(e>d)
      {
         printf("advertise\n");
      }
      else if(e==d)
      {
         printf("does not matter\n");
      }
      else if(e<d)
      {
        printf("do not advertise\n");
      }
   }
}