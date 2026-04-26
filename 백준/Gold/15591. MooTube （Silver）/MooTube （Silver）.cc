#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <queue>

using namespace std;
typedef struct vector_node
{
	int x;
	int count;
}vector_node;	

vector_node data;
vector<vector_node> node[5005];
int n,k;
queue <int> bfs_queue;
long long int bfs(int start)
{
	int count = 0;
	bool visited[5005]={0};
	visited[start] = true;
	bfs_queue.push(start);
	
	while(bfs_queue.empty() == false)
	{
		int x = bfs_queue.front();
		for(int i=0; i<node[x].size(); i++)
		{
			int new_x = node[x][i].x;
			int new_value = node[x][i].count;
			if(new_value >= k && visited[new_x] == false)
			{
				visited[new_x] = true;
				count++;
				bfs_queue.push(new_x);
			}
		}
		bfs_queue.pop();
	}
	return count;
}
int main(void)
{
	int q;
	scanf("%d %d",&n,&q);
	for(int i=1; i<=n-1; i++)
	{
		int x, y, count;
		scanf("%d %d %d",&x,&y,&count);
		data.x = y;
		data.count = count;

		node[x].push_back(data);
		
		data.x = x;
		data.count = count;
		
		node[y].push_back(data);		
	}
	for(int i=1; i<=q; i++)
	{
		int start;
		scanf("%d %d",&k,&start);
		printf("%lld\n",bfs(start));
	}
}