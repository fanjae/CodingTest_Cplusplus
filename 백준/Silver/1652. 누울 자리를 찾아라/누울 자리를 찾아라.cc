#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	int n;
	int wid_ans = 0;
	int hei_ans = 0;
	char value[105][105] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> value[i][j];
		}
		value[i][n] = 0;
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (value[i][j] == '.')
			{
				cnt++;
			}
			if (value[i][j] == 'X' || value[i][j + 1] == 0)
			{
				if (cnt >= 2)
				{
					wid_ans++;
					cnt = 0;
				}
				cnt = 0;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		int cnt = 0;
		for (int j = 0; j < n; j++)
		{
			if (value[j][i] == '.')
			{
				cnt++;
			}
			if (value[j][i] == 'X' || j + 1 == n)
			{
				if (cnt >= 2)
				{
					hei_ans++;
					cnt = 0;
				}
				cnt = 0;
			}
		}
	}
	cout << wid_ans << " " << hei_ans;
}