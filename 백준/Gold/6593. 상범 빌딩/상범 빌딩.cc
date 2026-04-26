#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;

int L,R,C;
char data[35][35][35];
int start_x, start_y, start_z;
int end_x, end_y, end_z;
int dx[6]={1,-1,0,0,0,0};
int dy[6]={0,0,1,-1,0,0};
int dz[6]={0,0,0,0,1,-1};

bool find_ans = false;

bool safe(int x, int y, int z)
{
	if(x <= 0 || x > L)
	{
		return false;
	}
	if(y <= 0 || y > R)
	{
		return false;
	}
	if(z <= 0 || z > C)
	{
		return false;
	}
	return true;
}

void bfs()
{
	bool visited[35][35][35]={0};
	queue <pair<pair<int, int>, int>> que;
	queue <int> count_que;
	
	visited[start_x][start_y][start_z] = true;
	que.push(make_pair(make_pair(start_x,start_y),start_z));
	count_que.push(0);
	
	while(!que.empty())
	{
		int target_x = que.front().first.first;
		int target_y = que.front().first.second;
		int target_z = que.front().second;
		int target_count = count_que.front();	
		
		que.pop();
		count_que.pop();

		if(target_x == end_x && target_y == end_y && target_z == end_z)
		{
			printf("Escaped in %d minute(s).\n",target_count);
			find_ans = true;
			return ;
		}
		
		for(int i=0; i<6; i++)
		{
			int new_x = target_x + dx[i];
			int new_y = target_y + dy[i];
			int new_z = target_z + dz[i];
			
			if(safe(new_x,new_y,new_z) == true && visited[new_x][new_y][new_z] == false && data[new_x][new_y][new_z] != '#')
			{
				visited[new_x][new_y][new_z] = true;
				que.push(make_pair(make_pair(new_x,new_y),new_z));
				count_que.push(target_count+1);					
			}
		}
	}
}
int main(void)
{
	while(1)
	{
		scanf("%d %d %d",&L,&R,&C);
		if(L == 0 && R == 0 && C == 0)
		{
			break;
		}
		getchar();
		for(int i=1; i<=L; i++)
		{
			for(int j=1; j<=R; j++)
			{
				for(int k=1; k<=C+1; k++)
				{
					scanf("%c",&data[i][j][k]);
					if(data[i][j][k] == 'S')
					{
						start_x = i;
						start_y = j;
						start_z = k;
					}
					if(data[i][j][k] == 'E')
					{
						end_x = i;
						end_y = j;
						end_z = k;
					}
					else if(data[i][j][k] == '\n')
					{
						data[i][j][k] = 0;
						break;
					}
				}
			}
			getchar();
		}
		
		/*
		for(int i=1; i<=L; i++)
		{
			for(int j=1; j<=R; j++)
			{
				for(int k=1; k<=C; k++)
				{
					printf("%c",data[i][j][k]);
				}
				printf("\n");
			}
			printf("\n");
		}*/
		
		bfs();
		if(find_ans == false)
		{
			printf("Trapped!\n");
		}
		
		for(int i=0; i<=L; i++)
		{
			for(int j=0; j<=R; j++)
			{
				for(int k=1; k<C; k++)
				{
					data[i][j][k] = '#';
				}
			}
		}
		find_ans = false;
	}
}