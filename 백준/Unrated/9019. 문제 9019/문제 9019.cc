#include <stdio.h>
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

int start_value, end_value;

void bfs()
{
	bool visited[10005]={0};
	queue <pair<int, string>> data_que;
	
	data_que.push(pair<int, string>(start_value, ""));
	visited[start_value] = true;
	while(!data_que.empty())
	{
		int now_start = data_que.front().first;
		string ans_string = data_que.front().second;
		data_que.pop();		
		
		if(now_start == end_value)
		{
			cout << ans_string << endl;
			break;
		}
		else
		{
			int command = (now_start * 2) % 10000;
			if(visited[command] == false)
			{
				visited[command] = true;
				data_que.push(pair<int, string>(command,ans_string+"D"));
			}
			
			if(now_start == 0)
			{
				command = 9999;
			}
			else
			{
				command = now_start - 1;
			}
			if(visited[command] == false)
			{
				visited[command] = true;
				data_que.push(pair<int, string>(command,ans_string+"S"));
			}
			if(now_start != 0)
			{
				command = ((now_start % 1000) * 10) + (now_start / 1000);
				if(visited[command] == false)
				{
					visited[command] = true;
					data_que.push(pair<int, string>(command,ans_string+"L"));
				}
				
				command = ((now_start % 10) * 1000) + (now_start / 10);
				if(visited[command] == false) 
				{
					visited[command] = true;
					data_que.push(pair<int, string>(command,ans_string+"R"));
				}
			}
		}
	}
}
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&start_value,&end_value);	
		bfs();
	}
}