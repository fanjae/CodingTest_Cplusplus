#include <iostream>
using namespace std;
int dp[105] = { 0,1,3,6 };
int main(void)
{
	int n = 1;
	for (int i = 4; i <= 100; i++)
	{
		dp[i] = dp[i - 1] + i;
	}
	while (n != 0)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		cout << dp[n] << "\n";
	}
}