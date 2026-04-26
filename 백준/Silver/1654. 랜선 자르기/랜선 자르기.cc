#include <stdio.h>
int main(void)
{
	long long int k,n;
	long long int max=0;
	long long int lan[10005];
	scanf("%lld %lld",&k,&n);
	for(int i=0; i<k; i++)
	{
		scanf("%lld",&lan[i]);
		if(lan[i] > max)
		{
			max = lan[i];
		}
	}
	
	long long int left = 1;
	long long int right = max;
	long long int ans = 0;
	long long int mid;
	while(left <= right)
	{
		long long int count = 0;
		mid = (left + right) / 2;
		
		for(long long int i=0; i<k; i++)
		{
			if(lan[i] / mid > 0)
			{
				count += (lan[i] / mid);
			}
		}
		
		if(count < n)
		{
			right = mid - 1;
		}
		else
		{
			if(count >= n)
			{
				ans = mid;
			}
			left = mid + 1;
		}
	}
	printf("%lld\n",ans);
}