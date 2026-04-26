#include <stdio.h>
#include <stdlib.h>
int t[22];
int p[22];
int max = 0;
int n;
void dfs(int day,int value)
{
	if(day >= n)
	{
		if(max < value)
		{
			max = value;
		}
		return ;
	}

	if(day + t[day] <= n)
	{
		dfs(day+t[day],value+p[day]);
	}
	dfs(day+1,value);
	
}
int main(void)
{
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&t[i], &p[i]);
	}
	dfs(0,0);
	printf("%d ",max);	
}