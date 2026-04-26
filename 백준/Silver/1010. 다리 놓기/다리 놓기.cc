#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		long long int sum=1,sum2=1;
		long long int data[105]={0};
		long long int data2[105]={0};
		long long int n,m;
		long long int i,j;
	   scanf("%lld %lld",&m,&n);
		for(i=n-m+1; i<=n; i++)
		{
	 		 data[i] = i;
		}
		for(i=1; i<=m; i++)
		{
          data2[i] = i;
	   }
		for(i=n-m+1; i<=n; i++)
		{
		   for(j=2; j<=m; j++)
			{
			   if((data[i] % data2[j] == 0) && data2[j]!=1)
				{
				   data[i] = data[i] / data2[j];
					data2[j] = 1;
				}
		   }
		}
		for(i=n-m+1; i<=n; i++)
		{
		    sum *= data[i];
	   }
		for(j=2; j<=m ;j++)
		{
		    sum2 *= data2[j];
	   }
		printf("%lld\n",sum/sum2);
	}
}