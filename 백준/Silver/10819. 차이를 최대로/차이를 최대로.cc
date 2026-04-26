#include <stdio.h>
#include <math.h>
#include <algorithm>

using namespace std;
int main(void)
{
	int n;
	int data[10];
	int max = 0;
	int sum_value = 0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n);
	do
	{
		sum_value = 0;
		for(int i=0; i<n-1; i++)
		{
			sum_value = sum_value + abs(data[i] - data[i+1]);
		}
		if(sum_value > max)
		{
			max = sum_value;
		}
	}while(next_permutation(data,data+n));
	printf("%d\n",max);
}