#include <stdio.h>
int data[1000005];
int main(void)
{
	int n,m;
	
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	
	int left = 1;
	int right = 2000000000;
	int mid;
	int ans = 0;
	while(left <= right)
	{
		long long int sum = 0;
		mid = (left+right) / 2;
		
		for(int i=0; i<n; i++)
		{
			if(data[i] - mid > 0)
			{
				sum += data[i] - mid;
			}
		}
		
		if(sum < m)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
		
	}	
	printf("%d",left-1);
}