#include <stdio.h>
#include <string.h>
#include <queue>
#include <vector>

using namespace std;
vector <int> vec[300005];

int move_count[300005];
int n,m;
int s,e;

int safe(int x)
{
	if(x <= 0 || x > n)
	{
		return false;
	}
	return true;
}
void bfs()
{
	queue <int> que;
	que.push(s);
	
	while(!que.empty())
	{
		int target = que.front();
		que.pop();

		if(target == e)
		{
			printf("%d\n",move_count[target]);
			return ;
		}
		if((safe(target-1) == true) && move_count[target-1] == -1)
		{
			que.push(target-1);
			move_count[target-1] = move_count[target] + 1;
		}
		if((safe(target+1) == true) && move_count[target+1] == -1)
		{
			que.push(target+1);
			move_count[target+1] = move_count[target] + 1;
		}
		for(int i=0; i<vec[target].size(); i++)
		{
			int temp_value = vec[target][i];
			if((safe(temp_value) == true) && move_count[temp_value] == -1)
			{
				que.push(temp_value);
				move_count[temp_value] = move_count[target] + 1;
			}
		}
	}
}
int main(void)
{

	scanf("%d %d",&n,&m);
	scanf("%d %d",&s,&e);
	
	memset(move_count,-1,sizeof(move_count));
	move_count[s] = 0;
	for(int i=1; i<=m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		vec[x].push_back(y);
		vec[y].push_back(x);
	}
	bfs();
}