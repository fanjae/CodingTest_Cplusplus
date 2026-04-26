#include <iostream>
#include <string>
using namespace std;
int cnt[3][12] = {{'A','B','C','A','B','C','A','B','C','A','B','C'},{'B','A','B','C','B','A','B','C','B','A','B','C'},{'C','C','A','A','B','B','C','C','A','A','B','B'}};
int ans[3];
int max_value;
string name[3] = {"Adrian","Bruno","Goran"};
int main(void)
{
	int n;
	string str;
	cin >> n;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (str[i] == cnt[j][i % 12])
			{
				ans[j]++;
			}
		}
	}

	max_value = ans[0];
	for (int i = 0; i < 3; i++)
	{
		if (max_value < ans[i]) max_value = ans[i];
	}
	
	cout << max_value << "\n";
	for (int i = 0; i < 3; i++)
	{
		if (ans[i] == max_value)
		{
			cout << name[i] << "\n";
		}
	}

}