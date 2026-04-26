#include <iostream>
using namespace std;
int n;
int dat[10005] = { 0 };
long long int ans = 0;
int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> dat[i];
	}

	for (int i = 0; i < n ; i++)
	{
		for (int j = 0; j < n; j++)
		{
			ans += abs(dat[i] - dat[j]);
		}
	}
	cout << ans;
}