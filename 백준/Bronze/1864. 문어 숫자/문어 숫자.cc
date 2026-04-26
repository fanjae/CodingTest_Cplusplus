#include <iostream>
#include <string>
using namespace std;
int octo_char(char data)
{
	if (data == '-') return 0;
	else if (data == '\\') return 1;
	else if (data == '(') return 2;
	else if (data == '@') return 3;
	else if (data == '?') return 4;
	else if (data == '>') return 5;
	else if (data == '&') return 6;
	else if (data == '%') return 7;
	else if (data == '/') return -1;
} 
int main(void)
{
	int str_length;
	while (1)
	{
		long long int ans = 0;
		string str;
		cin >> str;

		str_length = str.length();
		if (str == "#")
		{
			break;
		}

		int octo_value = 1;
		for (int i = 1; i < str_length; i++)
		{
			octo_value *= 8;
		}
		for (int i = 0; i < str_length; i++)
		{
			ans += octo_char(str[i]) * octo_value;
			octo_value /= 8;
		}
		cout << ans << "\n";
		
	}
}