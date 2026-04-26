#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	int abc_length;
	cin >> abc;
	abc_length = abc.length();

	int X_count = 0;
	for (int i = 0; i < abc_length; i++)
	{
		if (abc[i] == 'X')
		{
			X_count++;
		}
		if (abc[i] == '.' || i == abc_length -1)
		{
			if (X_count == 1 || X_count == 3)
			{
				cout << -1;
				return 0;
			}

		}

		if (X_count == 4)
		{
			for (int j = i; j >= i - 3; j--)
			{
				abc[j] = 'A';
			}
			X_count = 0;
		}
		else if (X_count == 2 && abc[i+1] != 'X')
		{
			for (int j = i; j >= i - 1; j--)
			{
				abc[j] = 'B';
			}
			X_count = 0;
		}

	}
	cout << abc;
}