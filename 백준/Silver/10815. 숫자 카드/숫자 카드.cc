#include <iostream>
#include <set>
#include <vector>

std::set <int> card_data;
std::vector <int> find_value;
void find_card_value(int m)
{
	for (int i = 0; i < m; i++)
	{
		if (card_data.find(find_value[i]) != card_data.end()) {
			std::cout << 1 << " ";
		}
		else
		{
			std::cout << 0 << " ";
		}
	}
}
int main(void)
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	std::cout.tie(NULL);

	int n,m;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		int value;
		std::cin >> value;

		card_data.insert(value);
	}

	std::cin >> m;
	for (int i = 0; i < m; i++)
	{
		int value;
		std::cin >> value;

		find_value.push_back(value);
	}
	find_card_value(m);
}