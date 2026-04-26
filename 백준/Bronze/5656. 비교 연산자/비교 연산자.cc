#include <stdio.h>
#include <string.h>
int main(void)
{
	int i=1;
	int n,m;
	char data[30];
	scanf("%d %s %d",&n,data,&m);
	while(strcmp(data,"E")!=0)
	{
	 	  if(strcmp(data,"!=")==0)
	 	  {
	 	  	  if(n != m)
	 	  	  {
	 	  	  	  printf("Case %d: true\n",i++);
	 	  	  }
	 	  	  else
	 	  	  {
	 	  	  	  printf("Case %d: false\n",i++);
	 	  	  }
	 	  }
	 	  else if(strcmp(data,"==")==0)
	 	  {
	 	  	  if(n == m)
	 	  	  {
	 	  	  	  printf("Case %d: true\n",i++);
	 	  	  }
	 	  	  else
	 	  	  {
 	  	        printf("Case %d: false\n",i++);
 	  	     }
 	  	  }
 	  	  else if(strcmp(data,">=")==0)
 	  	  {
 	  	  	  if(n >= m)
 	  	  	  {
	  	  	     printf("Case %d: true\n",i++);
	  	  	  }
	  	  	  else
	  	  	  {
	  	  	  	  printf("Case %d: false\n",i++);
	  	  	  }
	  	  }
	  	  else if(strcmp(data,">")==0)
	  	  {
	  	  	  if(n > m)
	  	  	  {
	  	  	  	   printf("Case %d: true\n",i++);
	  	  	  }
	  	  	  else
	  	  	  {
	  	  	  	   printf("Case %d: false\n",i++);
	  	  	  }
	  	  }
	  	  else if(strcmp(data,"<=")==0)
	  	  {
  	        if(n <= m)
  	        {
       	      printf("Case %d: true\n",i++);
       	  }
       	  else
       	  {
       	  	   printf("Case %d: false\n",i++);
       	  }
        }
	  	  else if(strcmp(data,"<")==0)
	  	  {
  	        if(n < m)
  	        {
       	      printf("Case %d: true\n",i++);
       	  }
       	  else
       	  {
       	  	   printf("Case %d: false\n",i++);
       	  }
        }
		  scanf("%d %s %d",&n,data,&m); 	  	
	}
}
		