#include <stdio.h>
#include <math.h>
#define MAX 1000000
int arr[MAX];
int data[MAX];
int count = 0;
void prime_set()
{
	for(int i=2; i<MAX; i++)
	{
		arr[i] = i;
	}
	for(int i=2; i<MAX; i++)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(int j=i+i; j<MAX; j+=i)
		{
			arr[j] = 0;
		}
	}
	for(int i=2; i<MAX; i++)
	{
		if(arr[i] != 0)
		{
		   data[i] = i;
		   count++;
		}
	}
}
int main(void)
{
	int n=1;
	prime_set();
	while(n != 0)
	{
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		int a,b;
		int set = 0;
		for(int i=3; i<n; i++)
		{
			if(n == data[n-data[i]] + data[i]) {
				printf("%d = %d + %d\n",n,data[i],data[n-data[i]]);
				break;
			}
		}
	}
}