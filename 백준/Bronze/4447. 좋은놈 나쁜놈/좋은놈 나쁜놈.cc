#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int T;
	cin >> T;
	cin.get();
	while (T--)
	{
		int str_length;
		int cnt = 0;
		int cnt2 = 0;
		string str;
		getline(cin, str);

		str_length = str.length();

		for (int i = 0; i < str_length; i++)
		{
			if (str[i] == 'G' || str[i] == 'g')
			{
				cnt++;
			}
			if (str[i] == 'B' || str[i] == 'b')
			{
				cnt2++;
			}
		}
		cout << str << " is ";
		if (cnt > cnt2)
		{
			cout << "GOOD\n";
		}
		else if (cnt < cnt2)
		{
			cout << "A BADDY\n";
		}
		else
		{
			cout << "NEUTRAL\n";
		}
	}
}