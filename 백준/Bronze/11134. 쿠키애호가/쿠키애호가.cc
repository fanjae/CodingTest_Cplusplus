#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n,c;
		scanf("%d %d",&n,&c);
		int count = 0;
		int value = n;
		while(value > 0)
	   {
  	       value = value - c;
  	       count++;
  	   }
      printf("%d\n",count);
   }
}