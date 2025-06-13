#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
	int n;
	int ans = 0;
	int rope[100005];

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> rope[i];
	}
	sort(rope, rope + n, greater<>()); 

	for (int i = 0; i < n; i++)
	{
		if (rope[i] >= rope[i] / (i + 1)) // w/k 만큼의 중량을 버틸 수 있는가? (즉, 병렬로 엮어도 되는가)
		{
			ans = max(ans, rope[i] * (i + 1));
		}
		else // 못 버티면, 그 밧줄 용량에 대해 따로 비교.
		{
			ans = max(ans, rope[i]);
		}
	}
	cout << ans;
}