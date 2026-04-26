#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string str;
	string temp;
	int n;
	int ans = 0;

	cin >> str;
	cin >> n;
	while (n--)
	{
		cin >> temp;
		if (str == temp) ans++;
	}
	cout << ans;
}