#include <iostream>
#include <algorithm>
using namespace std;
int n;
int value[1000005];
int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}
	sort(value, value + n);
	for (int i = 0; i < n; i++)
	{
		cout << value[i] << "\n";
	}
}