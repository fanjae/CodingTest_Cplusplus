#include <iostream>
using namespace std;
int main(void)
{
	int n;
	int sum = 0;
	cin >> n;
	while (n--)
	{
		int value;
		cin >> value;
		sum += value;
	}
	cout << sum;
}