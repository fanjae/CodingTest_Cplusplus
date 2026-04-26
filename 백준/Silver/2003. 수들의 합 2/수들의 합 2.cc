#include <stdio.h>
int main(void)
{
	int left = 1;
	int right = 1;
	int data[10005];
	int n,m;
	
	int sum = 0;
	int ans = 0;	
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	while(left <= n && right <= n)
	{
		if(left == right)
		{
			sum += data[left];
		}
		else
		{
			sum += data[right];
		}
		
		if(sum == m)
		{
			ans++;
			left++;
			right = left;
			sum = 0;
		}
		else if(sum > m) 
		{
			left++;
			right = left;
			sum = 0;
		}
		else
		{
			right++;
		}
	}
	printf("%d\n",ans);
}
	
		