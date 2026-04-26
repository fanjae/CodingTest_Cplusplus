#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string str;
	int count[26] = { 0 };
	int cnt = 0;
	int value_data[5] = { 'M','O','B','I','S' };

	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		count[str[i] - 'A']++;
	}

	for (int i = 0; i < 5; i++)
	{
		if (count[value_data[i] - 'A'] > 0)
		{
			cnt++;
		}
	}
	
	if (cnt == 5) cout << "YES";
	else cout << "NO";
}