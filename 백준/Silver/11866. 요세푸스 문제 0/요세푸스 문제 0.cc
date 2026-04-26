#include <cstdio>
#include <stdlib.h>
#include <queue>

using namespace std;

int main(void)
{
	int n,k;
	queue <int> que;
	scanf("%d %d",&n,&k);
	
	for(int i=1; i<=n; i++)
	{
		que.push(i);
	}
	printf("<");
	while(!que.empty())
	{	
		for(int i=0; i<=k-1; i++)
		{
			int temp = que.front();
			if(i == k - 1)
			{
				printf("%d",temp);
				que.pop();
			}
			else
			{
				que.pop();
				que.push(temp);
			}
		}
		if(que.empty())
		{
			printf(">");
		}
		else
		{
			printf(", ");
		}
	}
}