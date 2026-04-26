#include <stdio.h>
#include <vector>

using namespace std;
vector <int> tree_data[100005];
int parent[100005]={0};

void dfs(int x)
{
	for(int i=0; i<tree_data[x].size(); i++)
	{
		if(tree_data[x][i] == 1)
		{
			continue;
		}
		if(parent[tree_data[x][i]] == tree_data[x][i])
		{
			parent[tree_data[x][i]] = x;
			dfs(tree_data[x][i]);
		}
	}
}
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		parent[i] = i;
	}
	for(int i=1; i<n; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		tree_data[x].push_back(y);
		tree_data[y].push_back(x);
	}
	dfs(1);
	for(int i=2; i<=n; i++)
	{
		printf("%d\n",parent[i]);
	}
	
}