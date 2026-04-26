#include <stdio.h>
#include <stdbool.h>
int parent[205];
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
void union_set(int x, int y)
{
	int parent_x;
	int parent_y;
	parent_x = find(x);
	parent_y = find(y);
	
	if(parent_x != parent_y)
	{
		parent[parent_y] = parent[parent_x];
	}
	else
	{
		return ;
	}
}

bool union_find(int x, int y)
{
	int parent_x;
	int parent_y;
	parent_x = find(x);
	parent_y = find(y);
	
	if(parent_x != parent_y)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main(void)
{
	int n;
	int m;
	bool not_exist = false;
	scanf("%d %d",&n,&m);
	for(int i=1; i<=n; i++)
	{
		parent[i] = i;
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			int value;
			scanf("%d",&value);
			if(value == 1)
			{
				union_set(i,j);
			}
		}
	}
	int start;
	int end;
	for(int i=1; i<=m; i++)
	{
		scanf("%d",&end);
		if(i == 1)
		{
			start = end;
		}
		if(union_find(start,end) == false)
		{
			not_exist = true;
			break;
		}
		start = end;
	}
	if(not_exist)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
}