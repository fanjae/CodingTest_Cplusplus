#include <iostream>
#include <algorithm>
int value[200005];
int n, c;
using namespace std;

bool possible(int mid)
{
	int cnt = 1;
	int last_pos = value[0];

	for (int i = 1; i < n; i++)
	{
		if (value[i] - last_pos >= mid)
		{
			cnt++;
			last_pos = value[i];
			if (cnt >= c)
			{
				return true;
			}
		}
	}
	return false;
}
int main(void)
{
	int answer = 0;
	cin >> n >> c;
	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}

	sort(value, value + n);

	int left = 0;
	int right = value[n - 1];

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (possible(mid))
		{
			answer = mid;
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	cout << answer;
}
