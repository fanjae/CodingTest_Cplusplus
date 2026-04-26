#include <stdio.h>
int main(void)
{
	long long int n;
	long long int data[10005];
	long long int value;
	long long int data_sum=0;
	long long int max_value=0;
	scanf("%lld",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%lld",&data[i]);
		data_sum += data[i];
		if(data[i] > max_value)
		{
			max_value = data[i];
		}
	}
	scanf("%lld",&value);
	long long int left = 1;
	long long int right = value;
	long long int mid;
	long long int ans = 0;
	
	if(value >= data_sum)
	{
		printf("%lld",max_value);
		return 0;
	}
	while(left <= right)
	{
		long long int sum = 0;
		mid = (left + right) / 2;
		for(int i=0; i<n; i++)
		{
			if(mid >= data[i])
			{
				sum += data[i];
			}
			else
			{
				sum += mid;	
			}
		}
		if(sum > value)
		{
			right = mid - 1;
		}
		else
		{
			if(ans < mid)
			{
				ans = mid;
			}
			left = mid + 1;	
		}
	}
	printf("%lld",ans);
}