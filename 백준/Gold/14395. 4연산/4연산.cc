#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <string.h>
#include <queue>
#include <set>

#define limit 10000000000LL
using namespace std; 

int start_value, end_value;
void bfs()
{
	set <long long int> visited;
	set <long long int>::iterator visit_value;
	queue <long long int> que;
	queue <string> str_que;
	
	que.push(start_value);
	str_que.push("");
	visited.insert(start_value);
	
	while(!que.empty())
	{
		unsigned long long int value = que.front();
		string temp = str_que.front();
		
		que.pop();
		str_que.pop();
		
		
		if(value == end_value)
		{
			if(value == start_value)
			{
				printf("0\n");
			}
			else
			{
				printf("%s\n",temp.c_str());
			}
			return ;
		}
		
		if(value * value <= limit)
		{
			visit_value = visited.find(value * value);
			if(visit_value == visited.end())
			{
				que.push(value * value);
				str_que.push(temp + '*');
				visited.insert(value * value);
			}
		}
		if(value + value <= limit)
		{
			visit_value = visited.find(value + value);
			if(visit_value == visited.end())
			{
				que.push(value + value);
				str_que.push(temp + '+');	
				visited.insert(value + value);
			}
		}
		if(value - value >= 1)
		{
			visit_value = visited.find(value - value);
			if(visit_value == visited.end())
			{
				que.push(value - value);
				str_que.push(temp + '-');
				visited.insert(value - value);
			}
		}
		if(value != 0 && value / value >= 1)
		{
			visit_value = visited.find(value / value);
			if(visit_value == visited.end())
			{
				que.push(value / value);
				str_que.push(temp + '/');	
				visited.insert(value / value);
			}
		}	
	}
	printf("-1\n");
}
int main()
{
	scanf("%d %d",&start_value,&end_value);
	bfs();
}