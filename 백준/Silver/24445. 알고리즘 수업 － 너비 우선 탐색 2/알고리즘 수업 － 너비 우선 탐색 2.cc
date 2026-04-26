#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

vector<int> connect[100005];
int visit_order[100005];
bool visited[100005];

queue<int> que;

int n, m, start;
int cnt = 1;
void bfs()
{
	que.push(start);
	visit_order[start] = cnt;
	visited[start] = true;

	while (!que.empty())
	{
		int front = que.front();
		que.pop();
		for (int i = 0; i < connect[front].size(); i++)
		{
			int next_value = connect[front][i];
			if (visited[next_value] == false)
			{
				que.push(next_value);
				visit_order[next_value] = ++cnt;
				visited[next_value] = true;
			}
		}
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

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
		sort(connect[i].begin(), connect[i].end(), greater<int>());
	}
	bfs();
	for (int i = 1; i <= n; i++)
	{
		cout << visit_order[i] << "\n";
	}
}