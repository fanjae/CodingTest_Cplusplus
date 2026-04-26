#include <stdio.h>
#include <stdbool.h>
int parent[1000005];

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
void union_go(int x, int y)
{
	x = find(x);
	y = find(y);
	
	if(x != y)
	{
		parent[y] = x;
	}
}

bool union_find(int x, int y)
{
	int x_parent = find(x);
	int y_parent = find(y);
	
	if(x_parent == y_parent)
	{
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
	for(int i=0; i<=n; i++)
	{
		parent[i] = i;
	}
	for(int i=1; i<=m; i++)
	{
		int op,a,b;
		scanf("%d %d %d",&op,&a,&b);
		
		if(op == 0)
		{
			union_go(a,b);
		}
		else if(op == 1)
		{
			if(union_find(a,b))
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
	}
}
	