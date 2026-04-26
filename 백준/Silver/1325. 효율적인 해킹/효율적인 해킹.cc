#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <vector>

using namespace std;

vector <int> line[10005];

int count[10005]={0};
int max_value = 0;
int n,m;
int cnt = 1;
bool visited[10005]={0};

void dfs(int x)
{
	int vec_size = line[x].size();
	for(int i=0; i<vec_size; i++)
	{
		if(visited[line[x][i]] == false)
		{
			visited[line[x][i]] = true;
			cnt++;
			dfs(line[x][i]);
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	
	
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		line[y].push_back(x);
	}
	
	for(int i=1; i<=n; i++)
	{
		visited[i] = true;
		dfs(i);
		count[i] = cnt;
		
		if(max_value < cnt)
		{
			max_value = cnt;
		}
		memset(visited,false,sizeof(visited));
		
		cnt = 1;
	}
	
	for(int i=1; i<=n; i++)
	{
		if(count[i] == max_value)
		{
			printf("%d ",i);
		}
	}
}
		
	