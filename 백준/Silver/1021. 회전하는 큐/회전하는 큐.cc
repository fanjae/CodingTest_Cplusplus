#include <iostream>
#include <deque>
using namespace std;
deque <int> deque_value;
int main(void)
{
	int n, m;
	int target;
	int ans = 0;
	int deque_size;
	int pop_value;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		deque_value.push_back(i);
	}
	
	for (int i = 1; i <= m; i++)
	{
		cin >> target;
		bool left = false;

		deque_size = deque_value.size();
		for (int j = 0; j <= deque_size / 2; j++) 
		{
			if (target == deque_value.at(j)) // 절반 안에 존재하는 경우 left 탐색
			{
				left = true;
			}
		}
		while (target != deque_value.front()) // 맨앞 값이 찾는 값과 다르면 계속 연산
		{
			if (left) // 왼쪽으로 한칸 이동
			{
				pop_value = deque_value.front();
				deque_value.pop_front();
				deque_value.push_back(pop_value);
				ans++;
			}
			else // 오른쪽으로 한칸 이동
			{
				pop_value = deque_value.back();
				deque_value.pop_back();
				deque_value.push_front(pop_value);
				ans++;
			}
		}
		deque_value.pop_front();
	}
	cout << ans;

}