#include <stdio.h>
int main(void)
{
	int n,m;
	int data[105][105];
	int go[105];
	int sum = 0;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d",&go[i]);
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	
	for(int i=0; i<m-1; i++)
	{
		sum = sum + data[go[i]][go[i+1]];
	}
	printf("%d\n",sum);
}