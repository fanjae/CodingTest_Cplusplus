#include <iostream>
using namespace std;
int main(void)
{
	int t1, e1, f1;
	int t2, e2, f2;
	int value, value2;
	cin >> t1 >> e1 >> f1;
	cin >> t2 >> e2 >> f2;
	value = (t1 * 3) + (e1 * 20) + (f1 * 120);
	value2 = (t2 * 3) + (e2 * 20) + (f2 * 120);

	if (value > value2)
	{
		cout << "Max";
	}
	else if (value < value2)
	{
		cout << "Mel";
	}
	else
	{
		cout << "Draw";
	}
}