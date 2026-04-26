#include <iostream>
using namespace std;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	first_init();

	int n;
	cin >> n;
	cout << "Gnomes:\n";
	while (n--)
	{
		int x, y, z;
		cin >> x >> y >> z;
		if (x < y && y < z)
		{
			cout << "Ordered\n";
		}
		else if (x > y && y > z)
		{
			cout << "Ordered\n";
		}
		else
		{
			cout << "Unordered\n";
		}
	}
}