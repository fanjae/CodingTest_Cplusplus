#include <iostream>
using namespace std;
int main() 
{
	int x;
	int n;
	int a, b;
	int sum = 0;
	cin >> x;
	cin >> n;
	while (n--)
	{
		cin >> a >> b;
		sum += a * b;
	}
	if (x == sum)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}