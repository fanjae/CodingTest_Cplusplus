#include <iostream>
#include <stdbool.h>
#include <algorithm>
#include <queue>
#include <map>

using namespace std;


const int dx[]={1,-1,0,0};
const int dy[]={0,0,1,-1};

queue<int> que;
map<int, int> visit;
bool safe(int x, int y)
{
	if(x < 0 || x >= 3)
	{
		return false;
	}
	if(y < 0 || y >= 3)
	{
		return false;
	}
	return true;
}
void bfs()
{
	while(!que.empty())
	{
		int now_value = que.front();
		que.pop();
		string temp_string = to_string(now_value);
		
		if(now_value == 123456789)
		{
			printf("%d\n",visit[now_value]);
			return ;
		}
		int key = temp_string.find('9');
		int x = key / 3;
		int y = key % 3;
		for(int i=0; i<4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];
			
			if(safe(new_x,new_y) == true)
			{
				string new_temp_string = temp_string;
				int new_key = new_x * 3 + new_y;
				
				swap(new_temp_string[key],new_temp_string[new_key]);
				int new_value = stoi(new_temp_string);
				
				if(visit[new_value] == 0)
				{
					que.push(new_value);
					visit[new_value] = visit[now_value] + 1;
				}
			}
			else
			{
				continue;
			}
		}	
	}
	printf("-1\n");
}
int main(void)
{
	int start_value = 0;
	int value;
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			scanf("%d",&value);
			if(value == 0)
			{
				value = 9;
			}
			start_value = start_value * 10 + value;
		}
	}
	
	que.push(start_value);
	visit[start_value] = 0;
	bfs();
}
