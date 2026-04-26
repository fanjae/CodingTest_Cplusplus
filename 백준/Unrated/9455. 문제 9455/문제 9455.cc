#include <iostream>
using namespace std;
int main(void)
{
	ios_base::sync_with_stdio(false);
	ios_base::sync_with_stdio(true);

	int T;
	cin >> T;
	while (T--)
	{
		int m, n;
		int box[105][105];
		int one_count = 0;
		int ans = 0;
		cin >> m >> n;
		for (int i = 1; i <= m; i++)
		{
			for (int j = 1; j <= n; j++)
			{
				cin >> box[i][j];
			}
		}

		for (int i = 1; i <= n; i++)
		{
			one_count = 0;
			for (int j = 1; j <= m; j++)
			{
				if (box[j][i] == 1)
				{
					int k = j;
					while (k <= m)
					{
						if (box[k][i] == 0)	one_count++;
						k++;
					}
					ans += one_count;
					one_count = 0;
				}
			}
		}
		cout << ans << "\n";
	}
}