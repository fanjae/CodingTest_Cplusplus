#include <stdio.h>
int main(void)
{
	int n,m;
	int data[1005];
	int dice[1005];
	int position = 1;
	
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=1; i<=m; i++)
	{
		scanf("%d",&dice[i]);
	}
	for(int i=1; i<=m; i++)
	{
		position += dice[i];
		if(position >= n)
		{
			printf("%d\n",i);
			return 0;
		}
		if(position + data[position] <= 1000)
		{
			position += data[position];
		}
		if(position >= n)
		{
			printf("%d\n",i);
			return 0;
		}
	}
}