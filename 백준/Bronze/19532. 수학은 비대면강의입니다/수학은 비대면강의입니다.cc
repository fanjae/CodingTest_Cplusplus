#include <iostream>
int main()
{
	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;
	for (int i = -999; i <= 999; i++)
	{
		for (int j = -999; j <= 999; j++)
		{
			if (((i * a) + (j * b) == c) && (i * d) + (j * e) == f)
			{
				std::cout << i << " " << j;
			}
		}
	}
}