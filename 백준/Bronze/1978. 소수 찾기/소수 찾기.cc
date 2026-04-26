#include <stdio.h>
int prime=0;
void isprime(int n)
{
	int count = 0;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			count++;
		}
	}
	if(count == 2)
	{
		prime++;
	}
}
int main()
{
	int n;
	int data[105];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
		isprime(data[i]);
	}
	printf("%d",prime);
}
	