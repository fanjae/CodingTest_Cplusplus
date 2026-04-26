#include <string>
#include <iostream>
using namespace std;
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	int n;
	int ans = 0;
	string data_value;
	cin >> n;
	cin >> data_value;

	for (int i = 0; i < n; i++)
	{
		if (data_value[i] == 'a' || data_value[i] == 'e' || data_value[i] == 'i' || data_value[i] == 'o' || data_value[i] == 'u')
		{
			ans++;
		}
	}
	cout << ans;
}