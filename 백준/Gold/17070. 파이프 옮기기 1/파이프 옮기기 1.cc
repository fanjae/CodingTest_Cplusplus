#include <iostream>
using namespace std;
int house[17][17];
int dp[17][17][3];
int n;
int ans;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> house[i][j];
		}
	}

	// dp[r][c][d] = (r,c) 위치에서 파이프의 방향이 d로 도착하는 경우(0 : 가로, 1 : 세로, 2 : 대각선)
	dp[1][1][0] = 1;
	dp[1][2][0] = 1;

	// 가로 = dp[r][c+1][0] = dp[r][c][0];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 3; j <= n; j++)
		{
			if (house[i][j] != 1) // 해당 위치가 벽이 아닌 경우
			{
				dp[i][j][0] = dp[i][j - 1][0] + dp[i][j - 1][2]; // 직전 파이프 상태가 가로 or 대각선이면 이동 성립.
				dp[i][j][1] = dp[i - 1][j][1] + dp[i - 1][j][2]; // 직전 파이프 상태가 세로 or 대각선이면 이동 성립.

				if (house[i - 1][j] != 1 && house[i][j - 1] != 1) // 해당위치 + 파이프가 닿는 2위치가 벽이 아닐때만 가능.
				{
					dp[i][j][2] = dp[i - 1][j - 1][0] + dp[i - 1][j - 1][1] + dp[i - 1][j - 1][2]; // 직전 파이프 상태 가로, 세로, 대각선 모두에 이동 성립.
				}
			}
		}
	}

	for (int i = 0; i < 3; i++)
	{
		ans = ans + dp[n][n][i];
	}
	cout << ans;
}