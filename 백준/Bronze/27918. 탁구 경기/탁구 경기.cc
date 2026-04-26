#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n;
	int d_count = 0;
	int p_count = 0;
	cin >> n;
	while (n--)
	{
		string str;
		cin >> str;
		if (str == "D")
		{
			d_count++;
		}
		if (str == "P")
		{
			p_count++;
		}
		if (abs(d_count - p_count) >= 2)
		{
			cout << d_count << ":" << p_count << "\n";
			return 0;
		}
	}
	cout << d_count << ":" << p_count << "\n";
}