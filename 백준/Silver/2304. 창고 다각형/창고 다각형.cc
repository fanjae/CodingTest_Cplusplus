#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
struct my_data
{
	int x;
	int y;
};
my_data storage[1005];
stack <my_data> left_stk;
stack <my_data> right_stk;
int max_y = 0;
int max_index = 0;
int ans = 0;

void first_init()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void process(stack <my_data>& stk)
{
	int target_x = storage[max_index].x;
	int target_y = storage[max_index].y;

	while (!stk.empty())
	{
		int new_x = stk.top().x;
		int new_y = stk.top().y;

		ans += abs((target_x - new_x)) * new_y;
		target_x = stk.top().x;
		target_y = stk.top().y;

		stk.pop();
	}
}
bool compare(const struct my_data& a, const struct my_data& b)
{
	return a.x < b.x;
}


int main(void)
{
	int n;
	first_init();

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> storage[i].x >> storage[i].y;
	}
	sort(storage, storage + n, compare);
	for (int i = 0; i < n; i++)
	{
		if (storage[i].y > max_y)
		{
			max_y = storage[i].y;
			max_index = i;
		}
	}
	for (int i = 0; i < max_index; i++)
	{
		if (left_stk.empty() || left_stk.top().y < storage[i].y)
		{
			left_stk.push({ storage[i].x, storage[i].y });
		}
	}

	for (int i = n-1; i > max_index; i--)
	{
		if (right_stk.empty() || right_stk.top().y < storage[i].y)
		{
			right_stk.push({ storage[i].x, storage[i].y });
		}
	}

	process(left_stk); // 왼쪽 부분 계산
	process(right_stk); // 오른쪽 부분 계산
	ans += storage[max_index].y; // 가장 큰 부분 계산

	cout << ans;
}