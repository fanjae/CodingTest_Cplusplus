#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
	double d1, d2;
	cin >> d1 >> d2;
	printf("%.6f\n", d1 * 2 + 2 * 3.141592 * d2);
}