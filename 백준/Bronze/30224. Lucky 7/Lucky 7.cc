#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	int abc_value;
	bool seven = false;
	cin >> abc;

	abc_value = stoi(abc);
	for (int i = 0; i < abc.length(); i++)
	{
		if (abc[i] == '7')
		{
			seven = true;
		}
	}

	if (seven == false && abc_value % 7 != 0)
	{
		cout << "0";
	}
	else if (seven == false && abc_value % 7 == 0)
	{
		cout << "1";
	}
	else if (seven == true && abc_value % 7 != 0)
	{
		cout << "2";
	}
	else if (seven == true && abc_value % 7 == 0)
	{
		cout << "3";
	}
}