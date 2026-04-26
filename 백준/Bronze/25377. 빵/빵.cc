#include <iostream>
using namespace std;
int main(void)
{
	int n;
	int min = 1005;
	cin >> n;
	while (n--)
	{
		int a, b;
		cin >> a >> b;
		if (a <= b)
		{
			if (min > b)
			{
				min = b;
			}
		}
	}
	if (min == 1005)
	{
		cout << -1;
	}
	else
	{
		cout << min;
	}

}