#include <stdio.h>
int data[305];
int ans_index[305]={0};
int ans=0;
int possible(int value, int n, int count)
{
	int group_limit=1,sum;
	sum = 0;
	for(int i=0; i<n; i++)
	{
		if(value < data[i] || sum > value) {
			return 0;
		}
		if(sum + data[i] <= value)
		{
			sum += data[i];
		}
		else
		{
			sum = data[i];
			group_limit++;
		}
		if(group_limit > count) {
			return 0;
		}
		
	}
	return 1;
}
void find_index(int value, int n, int count)
{
	int sum,index_count,ans_cnt;
	int group_limit = 1;
	
	sum = index_count = ans_cnt = 0;
	for(int i = 0; i < n; i++)
	{
		sum += data[i];
		if((sum > value) || (n-i == count-group_limit))
		{
			ans_index[index_count++] = ans_cnt;
			sum = data[i];
			ans_cnt = 0;
			group_limit++;
		}
		ans_cnt++;
	}
	ans_index[index_count] = ans_cnt;
}
int main(void)
{
	int n,m;
	int left,right,mid;
	int sum = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &data[i]);
		sum += data[i];
	}
	left = 1;
	right = sum;
	while(left <= right)
	{
		mid = (left + right) / 2;
		if( possible(mid, n, m) == 1) {
			ans = mid;
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
	printf("%d\n",ans);
	find_index(ans, n, m);

	for(int i = 0; i < m; i++)
	{
		printf("%d ",ans_index[i]);
	}
}