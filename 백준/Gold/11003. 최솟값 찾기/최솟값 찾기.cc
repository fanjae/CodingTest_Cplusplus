#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
deque <pair<int, int>> deque_value;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;
	int index_area;
	int deque_limit_size = 0;
	cin >> N >> L;
	for (int i = 1; i <= N; i++)
	{
		int value;
		cin >> value;
		index_area = i - L + 1;
		if (index_area <= 0) // i-L+1 이 0이하인 경우 그냥 1로 간주.
		{
			index_area = 1;
		}

		while (!deque_value.empty() && deque_value.back().first > value) // 기존 존재하는 값중에 새로운 값보다 큰 값이 있으면 빼냄. (최소값이 될 수 없음)
		{
				deque_value.pop_back();
		}
		deque_value.push_back(make_pair(value,i));

		if (!deque_value.empty() && deque_value.front().second < index_area) // i-L+1 값보다 작으면, 이제 이 값은 더이상 사용하지 못함.
		{
			deque_value.pop_front();
		}

		cout << deque_value.front().first << " ";
	}
}