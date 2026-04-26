#include <iostream>
#include <string>
int main()
{
	int n;
	std::string value;
	std::cin >> value >> n;
	std::cout << value[n-1];	
}