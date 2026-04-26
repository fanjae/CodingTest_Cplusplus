#include <stdio.h>
#include <iostream>
#include <stdbool.h>
#include <vector>

using namespace std;
vector<int> adj[100005];

int isBuilt[100005];
int indegree[100005];

int main()
{
	int n, m, k;
	scanf("%d %d %d", &n, &m, &k);

	while (m--) {
		int x,y;
		scanf("%d %d", &x, &y);
		adj[x].push_back(y);
		indegree[y]++;
	}

	bool not_cheat = true;
	while (k--)
	{
		int a,N;
		scanf("%d %d",&a,&N);
		if(a == 1)
		{
			if(indegree[N] > 0)
			{
				not_cheat = false;
			}
			if(isBuilt[N] == 0)
			{
				for(auto &i : adj[N])
				{
					indegree[i]--;
				}
			}
			isBuilt[N]++;
		}
		else
		{
			if(isBuilt[N] == false)
			{
				not_cheat = false;
			}
			isBuilt[N]--;
			if(isBuilt[N] == 0)
			{
				for(auto &i : adj[N])
				{
					indegree[i]++;
				}
			}
		}
	}
	if(not_cheat)
	{
		printf("King-God-Emperor\n");
	}
	else
	{
		printf("Lier!\n");
	}
	return 0;
}
