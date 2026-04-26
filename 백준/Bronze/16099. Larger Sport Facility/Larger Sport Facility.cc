#include <iostream>
using namespace std;
int main(void)
{
	int n;
	cin >> n;
	while (n--)
	{
		long long int lt, wt, le, we;
		cin >> lt >> wt >> le >> we;
		if (lt * wt < le * we)
		{
			cout << "Eurecom\n";
		}
		else if (lt * wt > le * we)
		{
			cout << "TelecomParisTech\n";
		}
		else
		{
			cout << "Tie\n";
		}
	}
}