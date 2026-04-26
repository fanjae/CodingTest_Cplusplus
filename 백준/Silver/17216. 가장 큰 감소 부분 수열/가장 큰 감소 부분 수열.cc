#include <iostream>
#include <algorithm>
using namespace std;
int dp[5005] = { 0 };
int data_value[5005];
int main(void)
{
	int n;
	int ans = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> data_value[i];
	}
	dp[n + 1] = 0;

	for (int i = n; i >= 1; i--)
	{
		for (int j = n+1; j >= i; j--)
		{
			if (data_value[i] > data_value[j])
			{
				dp[i] = max(dp[i], dp[j] + data_value[i]);
				ans = max(ans, dp[i]);
			}
		}
	}
	cout << ans;
}