#include <iostream>
int main()
{
	int n;
	std::cin >> n;

	while (n != 0)
	{
		std::cout << "long ";
		n -= 4;
	}
	std::cout << "int";
}