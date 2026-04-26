#include <iostream>
using namespace std;
int main(void)
{
	int n, k;
	int cnt = 0;
	int boy_list[7] = { 0 };
	int girl_list[7] = { 0 };
	cin >> n >> k;

	while (n--)
	{
		int gender, grade;
		cin >> gender >> grade;
		if (gender == 0)
		{
			girl_list[grade]++;
		}
		else
		{
			boy_list[grade]++;
		}
	}
	for (int i = 1; i <= 6; i++)
	{
		if (girl_list[i] < k)
		{
			if (girl_list[i] != 0)
			{
				cnt++;
			}
		}
		else
		{
			cnt = cnt + (girl_list[i] / k);
			if (girl_list[i] % k != 0)
			{
				cnt++;
			}
		}

		if (boy_list[i] < k)
		{
			if (boy_list[i] != 0)
			{
				cnt++;
			}
		}
		else
		{
			cnt = cnt + (boy_list[i] / k);
			if (boy_list[i] % k != 0)
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}