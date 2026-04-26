#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int max = 1;
	int count = 1;
	long long int max_value;
	long long int data[100005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lld",&data[i]);
	}
	sort(data,data+n);
	max_value = data[0];
	for(int i=1; i<n; i++)
	{
		if(data[i] == data[i-1])
		{
			count++;
		}
		else
		{
			count = 1;
		}
		if(max < count)
		{
			max = count;
			max_value = data[i];
		}
	}
	printf("%lld\n",max_value);
}