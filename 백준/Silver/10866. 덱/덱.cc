#include <stdio.h>
#include <string.h>
#include <deque>
using namespace std;
int main()
{
	deque <int> Deque;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int su;
		char command[15];
		scanf("%s",command);
		if(strcmp(command,"push_back") == 0)
		{
			scanf("%d",&su);
			Deque.push_back(su);
		}
		else if(strcmp(command,"push_front") == 0)
		{
			scanf("%d",&su);
			Deque.push_front(su);
		}
		else if(strcmp(command,"front") == 0)
		{
			if(Deque.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Deque.front());
			}
		}
		else if(strcmp(command,"back") == 0)
		{
			if(Deque.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Deque.back());
			}
		}
		else if(strcmp(command,"size") == 0)
		{
			printf("%d\n",Deque.size());
		}
		else if(strcmp(command,"empty") == 0)
		{
			printf("%d\n",Deque.empty());
		}
		else if(strcmp(command,"pop_front") == 0)
		{
			if(Deque.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Deque.front());
				Deque.pop_front();
			}
		}
		else if(strcmp(command,"pop_back") == 0)
		{
			if(Deque.empty() == 1)
			{
				printf("-1\n");
			}
			else
			{
				printf("%d\n",Deque.back());
				Deque.pop_back();
			}
		}
	}
}