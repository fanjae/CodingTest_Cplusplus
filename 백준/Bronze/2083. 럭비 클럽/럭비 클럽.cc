#include <string>
#include <iostream>
using namespace std;
void init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
int main(void)
{
	while (1)
	{
		string str_value;
		int age, kg;
		cin >> str_value >> age >> kg;
		if (str_value == "#" && age == 0 && kg == 0)
		{
			break;
		}
		cout << str_value << " ";
		if (age >= 18 || kg >= 80)
		{
			cout << "Senior\n";
		}
		else
		{
			cout << "Junior\n";
		}
	}
}