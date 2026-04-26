#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> connect[100005];
bool visited[100005];
int visited_order[100005];

int n;
int cnt = 1;
void dfs(int start, int order)
{
	visited[start] = true;
	visited_order[start] = order;
	for (int i = 0; i < connect[start].size(); i++)
	{
		int next_visit = connect[start][i];
		if (visited[next_visit] == false)
		{
			cnt++;
			dfs(next_visit,cnt);
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, start;
	cin >> n >> m >> start;
	while (m--)
	{
		int u, v;
		cin >> u >> v;
		connect[u].push_back(v);
		connect[v].push_back(u);
	}
	for (int i = 1; i <= n; i++)
	{
		sort(connect[i].begin(), connect[i].end());
	}

	dfs(start, cnt);

	for (int i = 1; i <= n; i++)
	{
		cout << visited_order[i] << "\n";
	}
}