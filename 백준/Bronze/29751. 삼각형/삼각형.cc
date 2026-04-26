#include <string>
#include <cstdio>
#pragma warning(disable:4996)
using namespace std;
int main(void)
{
	double w, h;
	scanf("%lf %lf", &w, &h);
	printf("%.1f\n", w*h / 2);
}