#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int n, k;
int S, X, Y;
int dx[4] = { -1, 1, 0, 0 };
int dy[4] = { 0, 0, -1, 1 };
int map_data[205][205];
bool visited[205][205]; // 방문 여부 체크

queue <pair <pair<int, int>, int>> que;
struct virus // vector에서 사용할 구조체
{
	int number;
	int x;
	int y;
};

bool compare(const virus &a, const virus &b)
{
	return a.number < b.number;
}

void bfs()
{
	while (!que.empty())
	{
		int x = que.front().first.first;
		int y = que.front().first.second;
		int cnt = que.front().second;
		visited[x][y] = true;
		que.pop();

		if (cnt == S) // 탐색 순서상 큐에 들어오는 cnt가 S와 같아지면, S초 까지 지난 후의 시험관 상태는 확정.
		{
			cout << map_data[X][Y] << "\n";
			return ;
		}

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (new_x <= 0 || new_x > n || new_y <= 0 || new_y > n) // 좌표 넘어가는 문제 체크
			{
				continue;
			}
			if (visited[new_x][new_y] == false && map_data[new_x][new_y] == 0) // 방문하지 않았으며, 바이러스 감염 안된 곳이면 확인. 
			{
				visited[new_x][new_y] = true;
				map_data[new_x][new_y] = map_data[x][y]; // 바이러스 전염
				que.push(make_pair(make_pair(new_x, new_y), cnt + 1)); // 큐에 담음.
			}
		}
	}
	cout << map_data[X][Y];
}


int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector <virus> vec;
	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> map_data[i][j];
			if (map_data[i][j] != 0)
			{
				vec.push_back({ map_data[i][j], i, j }); // 숫자가 낮은 바이러스가 우선 탐색이 되어야 하므로 vector에 담음
			}
		}
	}
	cin >> S >> X >> Y;
	sort(vec.begin(), vec.end(), compare); // 숫자 낮은 바이러스 우선으로 정렬.
	
	for (int i = 0; i < vec.size(); i++)
	{
		que.push(make_pair(make_pair(vec[i].x, vec[i].y), 0));
	}
	bfs();
}