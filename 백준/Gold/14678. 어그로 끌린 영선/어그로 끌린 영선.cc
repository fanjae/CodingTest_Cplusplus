#include <stdio.h>
#include <stdbool.h>
#include <vector>
#include <algorithm>
using namespace std;
#define MAX 1000005
int n,indegree[MAX];
bool odd[MAX];
vector<vector<int> > adj;

void dfs(int cur, int dep, int par)
{
	odd[cur] = dep & 1;
	for(auto &next : adj[cur])
    {
		if(next == par)
        {
            continue;
        }
		dfs(next, dep + 1, cur);
	}
}

int main()
{
	scanf("%d", &n);
	adj.resize(n+1);
	for(int i=0; i<n-1; i++)
    {
		int x, y;
		scanf("%d %d", &x, &y);
		adj[x].push_back(y);
		adj[y].push_back(x);
		indegree[x]++;
		indegree[y]++;
	}
	for(int i=1; i<=n; i++)
	{
		if(indegree[i] != 1)
		{
			dfs(i, 0, -1);
			break;
		}
	}
	int odd_count = 0, even_count = 0;
    int co_count = 0;
	for(int i=1; i<=n; i++)
	{
		if(indegree[i] == 1)
        {
			co_count++;
			if(odd[i] == 1)
			{
			    odd_count++;
			}
			else
            {
                even_count++;
            }
        }
	}
	if(n == 1)
	{
	    printf("1");
	}
	else if(n == 2)
	{
	    printf("0");
	}
	else if(co_count == n-1)
    {
        printf("%d\n", n-2);
    }
	else
    {
        printf("%d\n", max(odd_count, even_count));
    }
	return 0;
}
