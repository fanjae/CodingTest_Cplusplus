#include <stdio.h>
#include <utility>
#include <queue>

using namespace std;
int count[105][105][105]={0};
int tomato[105][105][105]={0};
int after_tomato[105][105][105]={0};
int dx[6]={1,-1,0,0,0,0};
int dy[6]={0,0,-1,1,0,0};
int dz[6]={0,0,0,0,-1,1};

int ans=0;
bool not_done;
int m,n,h;

queue <pair<pair<int, int>, int > > bfs_queue;

bool safe(int x, int y, int z)
{
	if(x <= 0 || x > h)
	{
		return false;
	}
	else if(y <= 0 || y > n)
	{
		return false;
	}
	else if(z <= 0 || z > m)
	{
		return false;
	}
	else if(tomato[x][y][z] == -1)
	{
		return false;
	}
	else
	{
		return true;
	}
}
void bfs()
{
	while(bfs_queue.empty() == false)
	{
		pair<pair<int, int>, int> front_pair = bfs_queue.front();
		for(int i=0; i<6; i++)
		{
			int x = front_pair.first.first;
			int y = front_pair.first.second;
			int z = front_pair.second;
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			int new_z = z + dz[i];
			
			if(safe(new_x,new_y,new_z) == true && tomato[new_x][new_y][new_z] == 0 && (count[new_x][new_y][new_z] == 0))
			{
				bfs_queue.push(make_pair(make_pair(new_x, new_y), new_z));
				after_tomato[new_x][new_y][new_z] = 1;
				count[new_x][new_y][new_z] = count[x][y][z] + 1;
			}
			
		}
		bfs_queue.pop();
	}
}
int main(void)
{
	scanf("%d %d %d",&m,&n,&h);
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=m; k++)
			{
				scanf("%d",&tomato[i][j][k]);
				after_tomato[i][j][k] = tomato[i][j][k];
			}
		}
	}
	
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=m; k++)
			{
				if(tomato[i][j][k] == 1)
				{
					bfs_queue.push(make_pair(make_pair(i, j), k));
				}
			}
		}
	}
	bfs();
	
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=n; j++)
		{
			for(int k=1; k<=m; k++)
			{
				if(after_tomato[i][j][k] == 0)
				{
					not_done = true;
					printf("-1\n");
					return 0;
				}
				else
				{
					if(ans < count[i][j][k])
					{
						ans = count[i][j][k];
					}
				}
			}
		}
	}
	printf("%d\n",ans);
}