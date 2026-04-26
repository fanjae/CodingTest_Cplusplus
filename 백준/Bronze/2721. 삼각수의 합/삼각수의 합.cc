#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
    	int n;
    	unsigned long long int data[305]={0};
    	unsigned long long int sum = 0;
    	scanf("%d",&n);
    	for(int i=1; i<=n+1; i++)
    	{
        	data[i] = i * (i + 1) / 2;
    	}
    	for(int i=1; i<=n; i++)
    	{
        	sum = sum + (i * data[i+1]);
    	}
    	printf("%llu\n",sum);
	}
}