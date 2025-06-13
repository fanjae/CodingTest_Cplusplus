#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int data[9];
	int sum = 0;
	int first, second;

	for (int i = 0; i < 9; i++)
	{
		cin >> data[i];
		sum += data[i];
	}
	sort(data, data + 9);

	for (int i = 0; i < 9; i++)
	{
		for (int j = i+1; j < 9; j++)
		{
			if (i == j) continue;
			if (sum - (data[i] + data[j]) == 100) // 일곱 난쟁이 키 합 100
			{
				first = data[i];
				second = data[j];
			}
		}
	}

	for (int i = 0; i < 9; i++)
	{
		if (data[i] == first || data[i] == second) continue; // 일곱 난쟁이에 해당 안하면 무시
		else cout << data[i] << "\n";
	}
}