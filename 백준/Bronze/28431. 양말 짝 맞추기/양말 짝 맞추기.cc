#include <iostream>
using namespace std;
int main(void)
{
	int count[10] = { 0 };
	int n;
	for (int i = 0; i < 5; i++)
	{
		cin >> n;
		count[n]++;
	}

	for (int i = 0; i < 10; i++)
	{
		if (count[i] % 2 == 1) cout << i;
	}
}