#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int M,N,X,Y,x,i;
	   scanf("%d %d %d %d",&M,&N,&X,&Y);
		for(i=0;i<M;i++)
		{
			x = (N*i+Y)%M;
			if (x == 0) 
			{
			    x = M;
			}
			if (x == X)
			{
			    break;
			}
		}
		if (i == M)
		{
		   printf("%d\n",-1);
		}
		else
		{
			printf("%d\n",i*N+Y);
		}
	}
}