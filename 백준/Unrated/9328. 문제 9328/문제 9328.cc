#include <iostream>
#include <cstring>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;
int n, m;
int dx[4] = { -1,1,0,0 };
int dy[4] = { 0,0,-1,1 };
int already_key[26];
bool visited[105][105];
char map_value[105][105];

string key_value;

bool safe(int x, int y) // 범위를 벗어나는 경우 처리. (주변을 테두리처럼 감싸고 있다고 전제하여 처리했음)
{
	if (x < 0 || x >= n + 2)
	{
		return false;
	}
	if (y < 0 || y >= m + 2)
	{
		return false;
	}
	return true;
}
int bfs()
{
	int ans = 0;
	queue <pair<int, int>> que;
	queue <pair<int, int>> door[26];

	que.push({ 0,0 });
	visited[0][0] = true;
	while (!que.empty())
	{
		int x = que.front().first;
		int y = que.front().second;
		que.pop();

		for (int i = 0; i < 4; i++)
		{
			int new_x = x + dx[i];
			int new_y = y + dy[i];

			if (safe(new_x, new_y) == false) continue; // 경로 벗어난 경우 바로 다음으로.
			if (map_value[new_x][new_y] == '*') continue; // 벽인 경우 바로 다음으로.
			if (map_value[new_x][new_y] >= 'a' && map_value[new_x][new_y] <= 'z' && visited[new_x][new_y] == false) // 열쇠있는 칸.
			{
				char target_key = map_value[new_x][new_y];
				visited[new_x][new_y] = true;

				map_value[new_x][new_y] = '.';
				already_key[target_key - 'a'] = true;
				que.push(make_pair(new_x, new_y));

				while (already_key[target_key - 'a'] > 0 && (!door[target_key - 'a'].empty())) // 해당 알파벳의 열쇠를 얻은 경우.
				{
					int target_x = door[target_key - 'a'].front().first;
					int target_y = door[target_key - 'a'].front().second;
					door[target_key - 'a'].pop();

					map_value[target_x][target_y] = '.';
					que.push(make_pair(target_x,target_y));
				}	
			}
			if (map_value[new_x][new_y] >= 'A' && map_value[new_x][new_y] <= 'Z' && visited[new_x][new_y] == false) // 열쇠따야 하는 칸
			{
			
				char target_key = map_value[new_x][new_y];
				visited[new_x][new_y] = true;
			
				if (already_key[target_key - 'A'] == 1) // 열쇠 획득 후, 첫 상황에만 처리
				{
					map_value[new_x][new_y] = '.';
					que.push(make_pair(new_x, new_y));
				}
				door[target_key - 'A'].push(make_pair(new_x, new_y)); // 키가 없는 경우 언젠가 다시 와야함.	
			}
			if (map_value[new_x][new_y] == '$' && visited[new_x][new_y] == false) // 문서 있는 칸.
			{
				ans++; 
				visited[new_x][new_y] = true;
				map_value[new_x][new_y] = '.';
				que.push(make_pair(new_x, new_y));
			}
			if (visited[new_x][new_y] == false) // 평범한 빈 공간.
			{
				visited[new_x][new_y] = true;
				que.push(make_pair(new_x, new_y));
			}
		}
	}
	return ans;
}
void input() // 입력
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> map_value[i][j];
		}
	}
	cin >> key_value;
	for (int i = 0; i < key_value.length(); i++)
	{
		if (key_value[i] == 0) continue;
		already_key[key_value[i] - 'a'] = true;
	}
}
void first_init() // c++ 입출력 속도 함수
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void init() // 매번 사용하는 배열 초기화
{
	memset(map_value, 0, sizeof(map_value));
	memset(visited, false, sizeof(visited));
	memset(already_key, 0, sizeof(already_key));
	key_value.clear();
}
int main(void)
{
	int T;
	first_init();
	cin >> T;
	while (T--)
	{
		init();
		int ans = 0;

		input();
		ans = bfs();
		cout << ans << "\n";

	}
}