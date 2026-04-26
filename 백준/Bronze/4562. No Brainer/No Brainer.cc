#include <iostream>
int main()
{
	int n;
	std::cin >> n;
	while (n--)
	{
		int x, y;
		std::cin >> x >> y;
		if (x < y)
		{
			std::cout << "NO BRAINS\n";
		}
		else
		{
			std::cout << "MMM BRAINS\n";
		}
	}
}