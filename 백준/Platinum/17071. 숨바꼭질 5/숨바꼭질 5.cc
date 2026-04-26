#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
int n, k;
int ans;
bool visited[2][500005]; // 짝수, 홀수초에 해당 칸을 방문 했는가?
struct my_pair
{
	int point;
	int time;
};

queue<my_pair> que;

void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
bool safe(int x)
{
	if (x < 0 || x > 500000)
	{
		return false;
	}
	return true;
}
int bfs()
{
	if (n == k)
	{
		return 0;
	}
	visited[0][n] = true; 
	que.push({ n,0 });

	while (!que.empty())
	{
		int point = que.front().point;
		int time = que.front().time;
		int accel = time * (time + 1) / 2; // 동생의 이동에는 가속도가 있다.
		que.pop();

		if (visited[time % 2][k + accel] == true) // 수빈이가 이 위치를 방문한 적이 있는 경우.
		{
			return time; // time초에 방문했으면 X-1 후 X+1 하는식으로 계속 왔다갔다 방법으로 재방문 가능.
		}
		if (k + accel >= 500000) // 이 범위를 넘을때까지 못찾았으면.. 찾을 가망이 없음.
		{
			return -1;
		}

		if (safe(point) == false) continue;

		time++; // 1초 뒤 상황임을 전제.
		if (safe(point * 2) == true && visited[time % 2][point * 2] == false) // 2 * X로 순간 이동 한 경우
		{
			visited[time % 2][point * 2] = true;
			que.push({ point * 2, time });
		}
		if (safe(point + 1) == true && visited[time % 2 ][point + 1] == false) // X + 1 위치로 감.
		{
			visited[time % 2][point + 1] = true;
			que.push({ point + 1, time });
		}
		if (safe(point - 1) == true && visited[time % 2][point - 1] == false) // X - 1 위치로 감.
		{
			visited[time % 2][point - 1] = true;
			que.push({ point - 1, time });
		}
	}
	return -1; // 불가능.
}
void input()
{
	cin >> n >> k;
}
int main(void)
{
	first_init();
	input();
	cout << bfs();

	cout << "\n";
}