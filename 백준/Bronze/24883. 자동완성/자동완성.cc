#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	cin >> abc;

	if (abc == "N" || abc == "n")
	{
		cout << "Naver D2";
		return 0;
	}
	else
	{
		cout << "Naver Whale";
		return 0;
	}
}