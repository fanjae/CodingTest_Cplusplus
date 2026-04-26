#include <iostream>
#include <queue>
#include <algorithm>
#include <cstring>
using namespace std;
int T;
int n;
int store[105][2]; // 편의점 개수
int house_x, house_y; // 상근이네 집 좌표
int dest_x, dest_y; // 락 페스티벌 좌표
bool store_visited[105]; // 해당 번째 편의점 방문 여부

void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void init()
{
	memset(store_visited, 0, sizeof(store_visited));
	memset(store, 0, sizeof(store));
}
void input()
{
	cin >> n;
	cin >> house_x >> house_y;
	for (int i = 1; i <= n; i++)
	{
		int x, y;
		cin >> x >> y;
		store[i][0] = x;
		store[i][1] = y;
	}
	cin >> dest_x >> dest_y;
}
void bfs()
{
	queue <pair<int, int>> que;
	que.push(make_pair(house_x, house_y)); // 집 좌표 큐에 넣음

	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();

		for (int i = 1; i <= n; i++) // 편의점 체크
		{
			if (abs(x - store[i][0]) + abs(y - store[i][1]) <= 1000 && store_visited[i] == false) // 편의점을 발견한 경우. 편의점 방문해서 맥주를 사자.
			{
				store_visited[i] = true;
				que.push(make_pair(store[i][0], store[i][1])); // 편의점으로
			}
		}
		if (abs(x - dest_x) + abs(y - dest_y) <= 1000) // 페스티벌 도착 가능하면 happy
		{
			cout << "happy\n";
			return ;
		}
	}
	cout << "sad\n";
	return;
}
int main(void)
{
	first_init();
	cin >> T;
	
	while (T--)
	{
		input();
		bfs();
		init();
	}
}