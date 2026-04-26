#include <stdio.h>
int main(void)
{
	 int count=1;
	 int T;
	 scanf("%d",&T);
	 while(T--)
	 {
	 	long long int sum=0;
	 	long long int n,m;
	 	scanf("%lld %lld",&n,&m);
	 	if(n * m >= 0)
	 	{
	 		sum = m * (m+1)/2 - n*(n-1)/2;
	 	}
	 	else
	 	{
	 		sum = m*(m+1)/2 - n*(n-1)/2;
	 	}
	 	printf("Scenario #%d:\n",count);
	 	printf("%lld\n",sum);
	 	printf("\n");
	 	count++;
	 }
}