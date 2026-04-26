#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	int n;
	int sum = 0;

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int temp;
		cin >> temp;
		sum += temp;
	}

	if (sum <= -1)
	{
		cout << "Left";
	}
	else if (sum == 0)
	{
		cout << "Stay";
	}
	else
	{
		cout << "Right";
	}
}