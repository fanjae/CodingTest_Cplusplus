#include <stdio.h>
#include <queue>

using namespace std;

int data[100005];
bool visited[100005]={0};
int cnt = 1;
int n;
void dfs(int x)
{
	if(x - data[x] > 0 && visited[x-data[x]] == false)
	{
		visited[x-data[x]] = true;
		cnt++;
		dfs(x-data[x]);
	}
	if(x + data[x] <= n && visited[x+data[x]] == false)
	{
		visited[x+data[x]] = true;
		cnt++;	
		dfs(x+data[x]);
	}
}
int main(void)
{
	int start;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("%d",&start);
	visited[start] = true;
	dfs(start);
	printf("%d\n",cnt);
}
	