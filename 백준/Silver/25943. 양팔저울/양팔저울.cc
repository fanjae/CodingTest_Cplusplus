#include <iostream>
using namespace std;
int stone[10005];
int weight[7] = {1,2,5,10,20,50,100 };
int main(void)
{
	int n;
	int left, right;
	int final_weight = 0;
	long long int answer = 0;
	int weight_index = 6;

	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) 
	{
		cin >> stone[i];
	}
	left = stone[1];
	right = stone[2];
	for (int i = 3; i <= n; i++)  
	{
		if (left == right) // 평형
		{
			left += stone[i];
		}
		else // 평형을 이루지 않음 (가벼운쪽에 올림)
		{
			if (left < right) 
			{
				left += stone[i];
			}
			else
			{
				right += stone[i];
			}
		}
	}
	final_weight = abs(left - right); // 두 양팔저울간 차를 비교

	while (1) // 무게추 처리
	{
		if (final_weight == 0)
		{
			break;
		}
		if (final_weight - weight[weight_index] >= 0)
		{
			final_weight -= weight[weight_index];
			answer++;
		}
		if (final_weight - weight[weight_index] < 0)
		{
			weight_index--;
		}
	}
	cout << answer;
}
