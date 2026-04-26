#include <iostream>
int main(void)
{
	long long int n;
	int count = 0;

	std::cin >> n;
	while (n != 1)
	{
		if (n % 2 == 0) n /= 2;
		else n++;
		count++;
	}
	std::cout << count;
}