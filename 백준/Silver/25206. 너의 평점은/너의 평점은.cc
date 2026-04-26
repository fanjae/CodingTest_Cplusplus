#include <iostream>
#include <string>
using namespace std;
int main()
{
	string sub;
	string grade;
	int n = 20;
	double credit;
	double cnt = 0;
	double sum = 0;

	while (n--)
	{
		cin >> sub >> credit >> grade;
		if (grade.compare("P") == 0)
		{
			continue;
		}
		else if(grade.compare("A+") == 0)
		{
			sum += credit * 4.5;
		}
		else if (grade.compare("A0") == 0)
		{
			sum += credit * 4.0;
		}
		else if (grade.compare("B+") == 0)
		{
			sum += credit * 3.5;
		}
		else if (grade.compare("B0") == 0)
		{
			sum += credit * 3.0;
		}
		else if (grade.compare("C+") == 0)
		{
			sum += credit * 2.5;
		}
		else if (grade.compare("C0") == 0)
		{
			sum += credit * 2.0;
		}
		else if (grade.compare("D+") == 0)
		{
			sum += credit * 1.5;
		}
		else if (grade.compare("D0") == 0)
		{
			sum += credit * 1.0;
		}
		else if (grade.compare("F") == 0)
		{
			sum += credit * 0.0;
		}
		cnt += credit;
	}
	cout << sum / cnt;
}
