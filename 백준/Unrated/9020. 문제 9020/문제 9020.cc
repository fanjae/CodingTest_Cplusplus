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
	int T;
	prime_set();
	scanf("%d",&T);
	while(T--)
	{
		int n;
		scanf("%d",&n);
		int a,b;
		int set = 0;
		int min = 10005;
		int min_x;
		int min_y;
		for(int i=2; i<n; i++)
		{
			if(n == data[n-data[i]] + data[i]) {
				if(min > abs(data[n-data[i]] - data[i]))
				{
					min = abs(data[n-data[i]] - data[i]);
					min_x = data[i];
					min_y = data[n-data[i]];	
				}
			}
		}
		printf("%d %d\n",min_x,min_y);
	}
}