#include <stdio.h>
int main(void)
{
	int n,k;
	int num[1005];
	int g[1005];
	int s[1005];
	int b[1005];
	int rank[1005];
	scanf("%d %d",&n,&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d %d",&num[i],&g[i],&s[i],&b[i]);
	}
	for(int i=0; i<n; i++)
	{
		rank[i] = 1;
	}
	for(int i=0; i<n-1; i++)
	{
		for(int j=i+1; j<=n; j++)
		{
			if(g[i] > g[j])
			{
				rank[j]++;
			}
			else if(g[i] == g[j])
			{
				if(s[i] > s[j])
				{
					rank[j]++;
				}
				else if(s[i] == s[j])
				{
					if(b[i] > b[j])
					{
						rank[j]++;
					}
					else if(b[i] < b[j])
					{
						rank[i]++;
					}
				}
				else
				{
					rank[i]++;
				}
			}
			else
			{
				rank[i]++;
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		if(num[i] == k)
		{
			printf("%d\n",rank[i]);
		}
	}
}