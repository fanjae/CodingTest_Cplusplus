#include <string>
#include <iostream>
using namespace std;
int main(void)
{
	string data_value = "WelcomeToSMUPCWelcomeTo";
	int index;
	cin >> index;
	cout << data_value[(index-1) % 14];
}