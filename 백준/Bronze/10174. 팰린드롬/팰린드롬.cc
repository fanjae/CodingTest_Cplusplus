#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string abc;
		bool palin = true;
		int abc_length;

		cin.clear();
		getline(cin, abc);
		abc_length = abc.length();

		for (int i = 0; i < abc_length / 2; i++)
		{
			char left = tolower(abc[i]);
			char right = tolower(abc[abc_length - i - 1]);
			if (left != right)
			{
				palin = false;
				break;
			}
		}

		if (palin)
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
}