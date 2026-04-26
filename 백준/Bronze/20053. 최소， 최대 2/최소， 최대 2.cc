#include <iostream>
using namespace std;
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	int T;
	init();

	cin >> T;
	while (T--)
	{
		int n;
		int max, min;
		bool first = false;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			int temp;
			cin >> temp;
			if (first == false)
			{
				max = temp;
				min = temp;
				first = true;
			}
			if (max < temp) max = temp;
			if (min > temp) min = temp;
		}
		cout << min << " " << max << "\n";
	}
}