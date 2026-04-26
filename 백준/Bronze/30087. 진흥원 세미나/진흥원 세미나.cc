#include <iostream>
#include <string>
using namespace std;
int main(void)
{
	int n;
	string abc;
	cin >> n;
	while (n--)
	{
		cin >> abc;
		if (abc == "Algorithm")
		{
			cout << "204";
		}
		if (abc == "DataAnalysis")
		{
			cout << "207";
		}
		if (abc == "ArtificialIntelligence")
		{
			cout << "302";
		}
		if (abc == "CyberSecurity")
		{
			cout << "B101";
		}
		if (abc == "Network")
		{
			cout << "303";
		}
		if (abc == "Startup")
		{
			cout << "501";
		}
		if (abc == "TestStrategy")
		{
			cout << "105";
		}
		cout << "\n";
	}

}