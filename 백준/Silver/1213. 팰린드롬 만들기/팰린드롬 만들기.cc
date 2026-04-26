#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	int str_length = 0;
	int alpha_count[26] = { 0 };
	int odd_count = 0;
	int odd_index = 0;
	cin >> abc;
	
	str_length = abc.length();
	for (int i = 0; i < str_length; i++)
	{
		alpha_count[abc[i]-'A']++;
	}

	for (int i = 0; i < 26; i++)
	{
		if (alpha_count[i] % 2 == 1)
		{
			odd_count++;
			odd_index = i;
		}
	}

	if (odd_count > 1) // 홀수인 알파벳이 1개를 넘어가면 팰린드롬 성립이 불가능.
	{
		cout << "I'm Sorry Hansoo\n";
	}
	else
	{
		for (int i = 0; i < 26; i++) // 앞부터 팰린드롬을 만듬
		{
			for (int j = 0; j < alpha_count[i] / 2; j++) 
			{
				if (alpha_count[i] % 2 == 1 && alpha_count[i] == 1) continue;
				
				cout << (static_cast<char>(i + 'A'));
			}
		}
		if (odd_count == 1) cout << (static_cast<char>(odd_index + 'A'));
		for (int i = 26; i >= 0; i--) // 뒤도 팰린드롬을 만듬 
		{
			for (int j = 0; j < alpha_count[i] / 2; j++)
			{
				cout << (static_cast<char>(i + 'A'));
			}
		}
	}
	

}