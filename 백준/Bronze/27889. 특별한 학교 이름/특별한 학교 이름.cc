#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	cin >> abc;

	if (abc == "NLCS")
	{
		cout << "North London Collegiate School";
	}
	else if (abc == "BHA")
	{
		cout << "Branksome Hall Asia";
	}
	else if (abc == "KIS")
	{
		cout << "Korea International School";
	}
	else if (abc == "SJA")
	{
		cout << "St. Johnsbury Academy";
	}
}