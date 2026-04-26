#include <stdio.h>
int main()
{
	 int T;
    int n;
    int i,j;
    scanf("%d",&T);
    while(T--)
    {
       scanf("%d",&n);
    	 for(i=1;i<=n;i++)
    	 {
				if(i == 1)
        		{
               for(j=1;j<=n;j++)
            	{
                  printf("#");
           		}
		      }
        	   else if(i == n)
            {
               for(j=1;j<=n;j++)
               {
					   printf("#");
      		   }
           }
        	  else
        	  {
            	for(j=1;j<=n;j++)
            	{
					   if(j == 1)
                	{
                     printf("#");
     		         }
                	else if(j == n)
                	{
                     printf("#");
              	   }	
                  else
                  {
                     printf("J");
                  }
               }
			  }
        printf("\n");
    	  }
    	  printf("\n");
    }
}