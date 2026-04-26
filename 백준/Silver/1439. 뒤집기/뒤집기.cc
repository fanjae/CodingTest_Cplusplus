#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string str_value;
	cin >> str_value;

	int ans = 0;

	int str_len = str_value.length();
	bool start = false;
	for (int i = 0; i < str_len-1; i++)
	{
		if (str_value[i] != str_value[i+1] && start == false)
		{
			ans++;
			start = true;
		}
		else if(str_value[i] != str_value[i+1] && start == true)
		{
			start = false;
		}
	}
	cout << ans;
}