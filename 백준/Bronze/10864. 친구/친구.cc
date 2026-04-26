#include <stdio.h>
int data[1005][1005];
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		data[x][y] = 1;
		data[y][x] = 1;
	}
	for(int i=1; i<=n; i++)
	{
		int sum = 0;
		for(int j=1; j<=n; j++)
		{
			sum += data[i][j];
		}
		printf("%d\n",sum);
	}
}