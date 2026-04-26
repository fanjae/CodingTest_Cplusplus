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

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (data_value[i] > data_value[j])
			{
				dp[i] = max(dp[i], dp[j] + 1);
				ans = max(ans, dp[i]);
			}
		}
	}
	cout << ans;
}