#include <stdio.h>
#include <string.h>
#include <queue>
#include <vector>

using namespace std;

int a,b;
int n,m;

vector <int> vec[1005];
int moving[1005];

void bfs()
{
	queue <int> que;
	que.push(a);
			
	while(!que.empty())
	{
		int x = que.front();
		que.pop();
		
		if(x == b)
		{
			return ;
		}
		for(int i=0; i<vec[x].size(); i++)
		{
			if(moving[vec[x][i]] == -1)
			{
				que.push(vec[x][i]);
				moving[vec[x][i]] = moving[x] + 1;
			}
		}
	}
	printf("-1\n");
}
	

int main(void)
{
	scanf("%d %d",&a,&b);
	scanf("%d %d",&n,&m);
	
	for(int i=1; i<=m; i++)
	{
		int x, y;
		scanf("%d %d",&x,&y);
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	
	memset(moving,-1,sizeof(moving));
	moving[a] = 0;
	bfs();
	
	if(moving[b] != -1)
	{
		printf("%d\n",moving[b]);
	}
}
	