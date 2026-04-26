#include <iostream>
using namespace std;
int main()
{
	int ball[105] = { 0 };
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	while (m--)
	{
		int i, j, k;
		cin >> i >> j >> k;
		for (int l = i; l <= j; l++)
		{
			ball[l] = k;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << ball[i] << " ";
	}
	
}