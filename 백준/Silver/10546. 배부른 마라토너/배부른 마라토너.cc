#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

map <string, int> map_data;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	int n;
	string str;
    first_init();
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> str;

		map_data[str]++;
	}

	for (int i = 1; i <= n - 1; i++)
	{
		cin >> str;

		map_data[str]--;
	}

	for (auto iter = map_data.begin(); iter != map_data.end(); iter++)
	{
		if (iter->second != 0)
		{
			cout << iter->first << "\n";
		}
	}
}