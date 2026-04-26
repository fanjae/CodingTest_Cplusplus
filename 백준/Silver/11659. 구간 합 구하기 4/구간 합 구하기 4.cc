#include <stdio.h>
int main(void)
{
	int n,m;
	int data[100005];
	long long int sum[100005]={0};
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
		if(i == 1)
		{
			sum[1] = data[1];
		}
		else
		{
			sum[i] = data[i] + sum[i-1];
		}
	}
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		printf("%lld\n",sum[y]-sum[x-1]);
	}
}