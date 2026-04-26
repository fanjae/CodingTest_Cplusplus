#include <iostream>
using namespace std;
void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

int main()
{
	first_init();
	int i,n;
	cin >> n;

	i = 1;
	while (i <= n)
	{
		int x, y;
		cin >> x >> y;

		int quo = x / y;
		int rem = x % y;

		cout << "Case " << i << ": ";

		if (quo > 0 && rem > 0)
		{
			cout << quo << " " << rem << "/" << y << "\n";
		}
		else if (quo)
		{
			cout << quo << "\n";
		}
		else if (rem)
		{
			cout << rem << "/" << y << "\n";
		}
		else
		{
			cout << 0 << "\n";
		}
		i++;
	}
}