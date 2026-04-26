#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	while (T--)
	{
		int x, y, z;
		int ans = 0;;
		cin >> x >> y >> z;
		for (int i = 1; i <= x; i++)
		{
			for (int j = 1; j <= y; j++)
			{
				for (int k = 1; k <= z; k++)
				{
					if ((i % j == j % k) && (j % k ==k % i))
					{
						ans++;
					}
				}
			}
		}
		cout << ans << "\n";
	}
}