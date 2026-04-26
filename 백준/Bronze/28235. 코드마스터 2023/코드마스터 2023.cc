#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string data_value;
	cin >> data_value;

	if (data_value == "SONGDO")
	{
		cout << "HIGHSCHOOL";
	}
	else if (data_value == "CODE")
	{
		cout << "MASTER";
	}
	else if (data_value == "2023")
	{
		cout << "0611";
	}
	else
	{
		cout << "CONTEST";
	}
}