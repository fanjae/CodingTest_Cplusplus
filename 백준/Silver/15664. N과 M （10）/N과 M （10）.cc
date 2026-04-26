#include <stdio.h>
#include <algorithm>

using namespace std;
int n,m;
int data[10];
bool visited[10];
int choose[10];
void back(int cnt, int last)
{
	bool depth[10005]={0};
	if(cnt == m)
	{
		for(int i=0; i<m; i++)
		{
			printf("%d ",choose[i]);
		}
		printf("\n");
		return ;
	}
	
	for(int i=0; i<n; i++)
	{
		if(visited[i] == true)
		{
			continue;
		}
		if(last <= data[i])
		{
			if(depth[data[i]] == false)
			{
				visited[i] = true;
				choose[cnt] = data[i];
				depth[data[i]] = true;
				back(cnt+1,data[i]);	
				visited[i] = false;
				choose[cnt] = 0;
			}
		}
	}
}
int main(void)
{
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);	
	}
	
	sort(data,data+n);
	back(0,0);
}
	