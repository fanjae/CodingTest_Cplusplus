#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int op_value[300005];
int main(void)
{
	int n;
	double ans = 0;
	double avg = 0;
	int op_number;
	int sum = 0;
	int except_num = 0;

	int min_point; // 제외시킬 최저점 위치
	int max_point; // 제외시킬 최고점 위치
	cin >> n;

	if (n != 0)
	{
		for (int i = 1; i <= n; i++)
		{
			cin >> op_value[i];
		}

		sort(op_value+1, op_value + n +1);
		op_number = floor(n * 0.15 + 0.5); // 제외시킬 인원.

		min_point = op_number;
		max_point = n - op_number;
		except_num = n - (op_number * 2);

		
		for (int i = min_point+1; i <= max_point; i++)
		{
			sum = sum + op_value[i];
		}

		avg = (double) sum / except_num;
		ans = floor(avg + 0.5);
	}
	cout << ans;

}