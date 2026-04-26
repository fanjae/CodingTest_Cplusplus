#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	string abc;
	cin >> abc;
	for (int i = abc.length()-1; i >= 0; i--)
	{
		cout << abc[i];
	}

}