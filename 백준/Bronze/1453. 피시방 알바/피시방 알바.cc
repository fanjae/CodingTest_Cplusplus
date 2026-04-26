#include <stdio.h>
int main(void)
{
    int size[105]={0};
    int n;
    int su;
    int count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&su);
        if(size[su] == 0)
        {
		     size[su]++;
		  }
		  else
		  {
		  	  count++;
		  }
	}
   printf("%d",count);
}