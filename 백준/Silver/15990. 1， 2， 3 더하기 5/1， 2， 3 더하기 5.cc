#include <iostream>
#define MOD 1000000009
using namespace std;
long long int dp[100005][4];
/*
dp[n][1] : n을 1,2,3의 합으로 나타낼때 마지막으로 사용한 숫자가 1
dp[n][2] : n을 1,2,3의 합으로 나타낼때 마지막으로 사용한 숫자가 2
dp[n][3] : n을 1,2,3의 합으로 나타낼때 마지막으로 사용한 숫자가 3
*/
int main(void)
{
	int T;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> T;


	dp[1][1] = 1; dp[1][2] = 0; dp[1][3] = 0;
	dp[2][1] = 0; dp[2][2] = 1; dp[2][3] = 0;
	dp[3][1] = 1; dp[3][2] = 1; dp[3][3] = 1;

	for (int i = 4; i <= 100000; i++)
	{
		dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % MOD;
		dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % MOD;
		dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % MOD;
	}

	while (T--)
	{
		int value;
		cin >> value;

		cout << (dp[value][1] + dp[value][2] + dp[value][3]) % MOD << "\n";
	}
}