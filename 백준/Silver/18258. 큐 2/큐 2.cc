#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
int main()
{
	queue <int> Queue;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int value;
		char command[10];
		scanf("%s",&command);
		if(strcmp(command,"push") == 0)
		{
			scanf("%d",&value);
			Queue.push(value);
		}
		else if(strcmp(command,"front") == 0)
		{
			if(Queue.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Queue.front());
			}
		}
		else if(strcmp(command,"back") == 0)
		{
			if(Queue.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Queue.back());
			}
		}
		else if(strcmp(command,"size") == 0)
		{
			printf("%d\n",Queue.size());
		}
		else if(strcmp(command,"empty") == 0)
		{
			printf("%d\n",Queue.empty());
		}
		else if(strcmp(command,"pop") == 0)
		{
			if(Queue.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Queue.front());
				Queue.pop();
			}
		}
	}
}