#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int laaddernsnake[105]; // 사다리 혹은 뱀 있는 칸 저장 용도
int dp[105];
int ans = 105;
queue<pair<int, int>> que;
void bfs(int start, int count)
{
	que.push(make_pair(start,count));
	while (!que.empty())
	{
		int point = que.front().first;
		int dice_count = que.front().second;
		que.pop();
		
		if (point == 100) // 도착한 경우
		{
			if (ans > dice_count) // 최저값 갱신
			{
				ans = dice_count;
				continue;
			}
		}
		if (ans < dice_count) // 주사위 굴린 횟수가 현재 기준 최저 횟수보다 크면 굴려볼 필요 없음.
		{
			continue;
		}
		if (laaddernsnake[point] != 0) // 사다리나 뱀 타고 가는 칸인 경우. 
		{
			point = laaddernsnake[point]; // 사다리 또는 뱀을 타고 이동.
			if (dp[point] > dice_count)
			{
				dp[point] = dice_count;
			}
		}
		for (int i = 1; i <= 6; i++)
		{
			if (point + i <= 100 && (dp[point+i] == 0 || dp[point+i] > dice_count+1))
			{
				dp[point + i] = dice_count + 1;
				que.push(make_pair(point + i, dice_count + 1));
			}
		}		
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int x, y;
	cin >> n >> m;
	for (int i = 0; i < n+m; i++)
	{
		cin >> x >> y;
		laaddernsnake[x] = y;
	}
	bfs(1, 0);
	cout << ans;
}