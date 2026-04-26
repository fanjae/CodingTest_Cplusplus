#include <iostream>
#define MOD 1000000003
using namespace std;
long long int dp[1005][1005] = { 0 };
int main(void)
{
	int n, k;
	cin >> n;
	cin >> k;
	if (n / 2 < k)
	{
		cout << 0;
		return 0;
	}
	for (int i = 1; i <= n; i++)
	{
		dp[i][1] = i;
	}

	for (int i = 4; i <= n; i++)
	{
		for (int j = 2; j <= k; j++)
		{
			dp[i][j] = (dp[i - 2][j - 1] + dp[i - 1][j]) % MOD;
		}
	}
	cout << dp[n][k];
	
}