#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	long long int value = 1;
	for (int i = n; i >= 1; i--)
	{
		value *= i;
	}
	std::cout << value;
}