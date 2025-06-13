#include <iostream>
#include <algorithm>
using namespace std;
int n;
struct meet
{
	int start;
	int end;
};
bool compare(const meet& dat, const meet& dat2)
{
	return dat.end < dat2.end || (dat.end == dat2.end && dat.start < dat2.start);
}
int main(void)
{
	int ans = 0;
	int current_time = 0;
	meet data[100005];
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> data[i].start >> data[i].end;
	}

	sort(data, data + n, compare); // 끝나는 시간 순 정렬
	
	// 끝나는 시간이 가장 빠른것을 우선으로 고르면 가장 최적	
	for (int i = 0; i < n; i++)
	{
		if (data[i].start >= current_time) // 현재 시간보다 이후 회의 순서대로 들어감.
		{
			current_time = data[i].end; // 끝나는 시간 기점으로 이동
			ans++;
		}
	}
	cout << ans;
}