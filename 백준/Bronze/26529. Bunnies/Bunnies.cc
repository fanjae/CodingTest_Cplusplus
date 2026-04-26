#include <iostream>
using namespace std;
long long int dp[46] = { 1,1 };
int n;
int main(void)
{
	cin >> n;
	for (int i = 2; i <= 45; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	while (n--)
	{
		int data_value;
		cin >> data_value;
		cout << dp[data_value] << "\n";
	}
}