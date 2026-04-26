#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(void)
{
	int data_value[3];
	cin >> data_value[0] >> data_value[1] >> data_value[2];
	sort(data_value, data_value + 3);
	cout << data_value[1];
}