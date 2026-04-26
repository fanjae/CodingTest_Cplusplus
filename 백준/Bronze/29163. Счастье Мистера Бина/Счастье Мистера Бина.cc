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
	init();
	int n;
	int even = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int data_value;
		cin >> data_value;

		if (data_value % 2 == 0)
		{
			even++;
		}
	}
	if (even > n - even)
	{
		cout << "Happy";
	}
	else
	{
		cout << "Sad";
	}
}