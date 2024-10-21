#include <iostream>
using namespace std;
int main(void)
{
	int dp[15];
	int T;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4; 
	for (int i = 4; i <= 11; i++)
	{
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1]; 

	}
	cin >> T;
	while (T--)
	{
		int value;
		cin >> value;
		cout << dp[value] << "\n";
	}
}