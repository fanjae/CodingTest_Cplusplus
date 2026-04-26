#include <stdio.h>
int data[100005];
int ans=0;
int possible(int value, int n, int count)
{
	int sum = 0;
	int limit_count = 0;
	for(int i=0; i<n; i++)
	{
		if(sum < data[i])
		{
			sum = value;
			limit_count++;
		}
		sum -= data[i];
	}
	if(limit_count <= count)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
		
int main(void)
{
	int n,m;
	int debug=0;
	int max=0;
	int min = -1;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
		max += data[i];
		if(min < data[i])
		{
			min = data[i];
		}
	}
	int left,mid,right;
	left = min;
	right = max;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if(possible(mid,n,m) == 1) 
		{
			ans = mid;
			right = mid - 1;
		}
		else 
		{
			left = mid + 1;
		}
	}
	printf("%d",ans);
}