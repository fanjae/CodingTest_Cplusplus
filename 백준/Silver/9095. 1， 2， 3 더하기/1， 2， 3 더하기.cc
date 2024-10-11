#include <iostream>
using namespace std;
int main(void)
{
	int dp[15]; // dp[n] : 정수 n을 1,2,3의 합으로 나타내는 가짓수
	int T;

	dp[1] = 1; // dp[1] : 정수 1을 1,2,3의 합으로 나타내는 가짓수 1
	dp[2] = 2; // dp[2] : 정수 2를 1,2,3의 합으라 나타내는 가짓수 2
	dp[3] = 4; // dp[3] : 정수 3을 1,2,3의 합으로 나타내는 가짓수 4
	for (int i = 4; i <= 11; i++)
	{
		dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1]; 
		/* 
		4을 만드려면 아래와 같음을 확인가능.
		3을 표현하는 가짓수에서 3+1 1+1+1+1 1+2+1 2+1+1 4개
		2를 표현하는 가짓수에서 1+1+2 2+2 2개 
		1을 표현하는 가짓수에서 1+3 1개
		결론 : dp[i] = dp[i-3] + dp[i-2] + dp[i-1] 
		*/
	}
	cin >> T;
	while (T--)
	{
		int value;
		cin >> value;
		cout << dp[value] << "\n";
	}
}