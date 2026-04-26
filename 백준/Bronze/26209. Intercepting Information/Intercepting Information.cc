#include <iostream>
using namespace std;
int main(void)
{
	for (int i = 1; i <= 8; i++)
	{
		int data_value;
		cin >> data_value;
		if (data_value == 9)
		{
			cout << "F";
			return 0;
		}
	}
	cout << "S";
}