#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
	string data_value[7] = {{"Never gonna give you up"},
	{"Never gonna let you down"},
	{"Never gonna run around and desert you"},
	{"Never gonna make you cry"},
	{"Never gonna say goodbye"},
	{"Never gonna tell a lie and hurt you"},
	{"Never gonna stop"}};

	int n;
	bool not_found = false;
	bool ans = true;
	cin >> n;
	cin.get();
	while (n--)
	{
		string target;
		getline(cin, target);

		for (int i = 0; i < 7; i++)
		{
			if (target.compare(data_value[i]) == 0)
			{
				not_found = true;
			}
		}
		if (not_found == false)
		{
			ans = false;
		}
		not_found = false;
	}
	if (ans == false)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}