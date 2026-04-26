#include <iostream>
#include <algorithm>
using namespace std;
struct stu_data
{
	int national;
	int number;
	int score;
};

bool compare(const stu_data &a, const stu_data &b)
{
	return a.score > b.score;
}

int main(void)
{
	int n;
	stu_data stu[1005];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].national >> stu[i].number >> stu[i].score;
	}
	sort(stu, stu + n, compare);

	cout << stu[0].national << " " << stu[0].number << "\n";
	cout << stu[1].national << " " << stu[1].number << "\n";
	for (int i = 2; i < n; i++)
	{
		if (stu[0].national == stu[i].national && stu[1].national == stu[i].national) // 동메달 수상자가 금,은메달과 국가 같으면 동메달 수상자는 다른나라
		{
			continue;
		}
		else
		{
			cout << stu[i].national << " " << stu[i].number << "\n";
			break;
		}
	}
}
