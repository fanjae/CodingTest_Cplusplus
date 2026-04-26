#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
int value_data[500005];
int count_data[8005];
vector <int> mode_vec;
int main(void)
{
	int n;
	int mode_count = 0;
	double sum = 0.0;
	int max_value, min_value;
	double avg;
	bool mode_count_more;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> value_data[i];
		sum = sum + value_data[i];
		if (i == 0)
		{
			max_value = value_data[i];
			min_value = value_data[i];
		}
		count_data[value_data[i] + 4000]++;
		if (mode_count < count_data[value_data[i] + 4000])
		{
			mode_count = count_data[value_data[i] + 4000]; // 최빈값 계산
		}
		if (max_value < value_data[i]) max_value = value_data[i]; // 최대값
		if (min_value > value_data[i]) min_value = value_data[i]; // 최소값	
	}

	for (int i = 0; i <= 8000; i++)
	{
		if (mode_count == count_data[i])
		{
			mode_vec.push_back(i-4000);
		}
	}
	avg = sum / n;
	cout << floor(avg + 0.5) << "\n"; // 평균(반올림 처리)

	sort(value_data, value_data + n);

	cout << value_data[n / 2] << "\n"; // 중앙값

	sort(mode_vec.begin(), mode_vec.end());

	if (mode_vec.size() == 1) // 최빈값이 1개인 경우, 가장 작은 값, 여러개인 경우 두번째로 작은 값
	{
		cout << mode_vec[0] << "\n";
	}
	else
	{
		cout << mode_vec[1] << "\n";
	}

	cout << max_value - min_value << "\n"; // 범위

}