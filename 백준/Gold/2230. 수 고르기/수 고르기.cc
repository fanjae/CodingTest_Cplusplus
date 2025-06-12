#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int m;
	int data[100005];
	int start, end;
	int ans = 2000000005;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> data[i];
	}
	sort(data, data + n);

	start = 0;
	end = 1;

	while (end < n)
	{
		if (data[end] - data[start] < m) // m 이하면 더 큰 차이 값을 비교해야함.
		{
			end++;
		}
		if (data[end] - data[start] >= m) // m 이상이면 현재 기준 end-start는 더이상 비교할 필요 없음.
		{
			ans = min(ans, data[end] - data[start]); // 최소값인 경우 값 갱신.
			start++;
		}
	}
	cout << ans;
}