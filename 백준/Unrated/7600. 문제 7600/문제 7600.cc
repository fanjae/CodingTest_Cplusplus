#include <iostream>
#include <string>
using namespace std;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	first_init();
	string value = "";
	while (value != "#")
	{
		int cnt = 0;
		int alpha_count[26] = { 0 };
		getline(cin, value);
		if (value == "#")
		{
			break;
		}
		int str_length = value.length();
		for (int i = 0; i < str_length; i++)
		{
			if (value[i] >= 'a' && value[i] <= 'z')
			{
				if (alpha_count[value[i] - 'a'] == 0)
				{
					alpha_count[value[i] - 'a']++;
					cnt++;
				}
			}
			if (value[i] >= 'A' && value[i] <= 'Z')
			{
				if (alpha_count[value[i] - 'A'] == 0)
				{
					alpha_count[value[i] - 'A']++;
					cnt++;
				}
			}
		}
		cout << cnt << "\n";
	}
}