#include <stdio.h>
int main(void)
{
	int n;
	int data[15];
	long long w=0,value=0;
	scanf("%d %lld",&n,&w);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<n-1; i++)
	{
		if(data[i] < data[i+1])
		{
			value += w / data[i];
			w %= data[i];
		}
		else if(data[i] > data[i+1])
		{
			w += value * data[i];
			value = 0;
		}
	}
	
	w += value * data[n-1];
	printf("%lld",w);
}