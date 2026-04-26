#include <iostream>
using namespace std;
int main(void)
{
	int n, T;
	int value;
	int ans = 0;
	cin >> n >> T;
	for (int i = 0; i < n; i++)
	{
		cin >> value;
		if (T - value >= 0)
		{
			T -= value;
			ans++;
		}
		else
		{
			break;
		}
	}
	cout << ans;
}