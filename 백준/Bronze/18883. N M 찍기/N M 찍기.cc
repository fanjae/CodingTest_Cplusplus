#include <iostream>
using namespace std;
int cnt = 1;
int main(void)
{
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (j == m)
			{
				cout << cnt;
			}
			else
			{
				cout << cnt << " ";
			}
			cnt++;
		}
		cout << "\n";
	}
}