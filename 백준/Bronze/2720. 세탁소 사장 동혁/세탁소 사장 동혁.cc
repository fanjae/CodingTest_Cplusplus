#include <stdio.h>
int main()
{
	int money;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int q=0,d=0,n=0,p=0;
	   scanf("%d",&money);
      while(money >= 25)
		{
		   money -= 25;
		   q++;
	   }
 	   while(money >= 10)
	   {
		   money -= 10;
	      d++;
	   }
	   while(money >= 5)
	   {
	 	   money -= 5;
		   n++;
	   }
      while(money >= 1)
	   {
		   money -= 1;
		   p++;
	   }
	   printf("%d %d %d %d\n",q,d,n,p);
	}
}