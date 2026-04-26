#include <string>
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
	init();
	int n = 1;
	int cnt = 1;
	while (n != 0)
	{
		cin >> n;
		if (n == 0) break;
		for (int i = 1; i <= n; i++)
		{
			int data_value;
			cin >> data_value;
		}
		cout << "Case " << cnt++ << ": Sorting... done!\n";
	}
}