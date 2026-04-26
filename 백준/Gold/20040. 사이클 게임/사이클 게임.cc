#include <stdio.h>
int parent[500005];

int find(int x)
{
	if(x == parent[x])
	{
		return x;
	}
	else
	{
		return parent[x] = find(parent[x]);
	}
}
bool union_set(int x, int y)
{
	int x_parent = find(x);
	int y_parent = find(y);
	
	if(x_parent != y_parent)
	{
		parent[y_parent] = x_parent;
		return true;
	}
	else
	{
		return false;
	}
}
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		parent[i] = i;
	}
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		if(union_set(x,y) == false)
		{
			printf("%d\n",i);
			return 0;
		}
	}
	printf("0\n");
	return 0;
}