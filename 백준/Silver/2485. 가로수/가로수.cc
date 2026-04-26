#include <stdio.h>
int GCD(int a,int b)
{
	while(a != b)
	{
		if(a > b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}
	return a;
}
int main()
{
	int n;
	int dat[100005]={0};
	int diff[100005]={0};
	int gcd = 0;
	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&dat[i]);
	}
	for(int i=1; i<n; i++)
	{
		diff[i] = dat[i] - dat[i-1];
	}
	gcd = diff[1];
	for(int i=1; i<n; i++)
	{
		gcd = GCD(diff[i],gcd);
	}
	int sum = 0;
	for(int i=1; i<n; i++)
	{
		sum += (diff[i] / gcd) - 1;
	}
	printf("%d\n",sum);
}