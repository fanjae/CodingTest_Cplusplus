#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
int T, W;
int tree_value[1005]; 
int dp[3][31][1005]; 
/*
dp[cur][cnt][time]
: time초. cnt번 방향 전환 진행, cur 위치에서 최대값.
*/

int main(void)
{
	int T, W;
	int ans = 0;
	cin >> T >> W;
	
	for (int i = 1; i <= T; i++)
	{
		cin >> tree_value[i];
	}

	memset(dp, 0, sizeof(dp));
	for (int i = 1; i <= T; i++) // 방향 전환 한번도 안한 경우
	{
		if (tree_value[i] == 1)
		{
			dp[1][0][i] = dp[1][0][i - 1] + 1;  
		}
		else
		{
			dp[2][1][i] = dp[2][1][i - 1] + 1;
		}
	}

	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			dp[1][j][i] = max(dp[2][j - 1][i - 1], dp[1][j][i - 1]); // 방향 전환한 상황을 고려해서 이전 위치가 2일때 까지 먹은 자두와 방향 전환 안한 상황에서 자두 최대값
			dp[2][j][i] = max(dp[1][j - 1][i - 1], dp[2][j][i - 1]); // 방향 전환한 상황을 고려해서 이전 위치가 1일때 까지 먹은 자두와 방향 전환 안한 상황에서 자두 최대값

			if (tree_value[i] == 1)
			{
				dp[1][j][i]++;
			}
			else
			{
				dp[2][j][i]++;
			}
		}
	}

	for (int i = 1; i <= T; i++)
	{
		for (int j = 1; j <= W; j++)
		{
			ans = max(ans, dp[1][j][i]);
			ans = max(ans, dp[2][j][i]);
		}
	}
	cout << ans;

}