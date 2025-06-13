#include <iostream>
using namespace std;
int ans = 0; // 부분 수열 개수
int n, s;
int value[25];
void sub(int sum, int start,int count, bool last)
{
	if (count > 0 && sum == s && last == true) // 1개 이상 골랐는가 + 마지막 값 포함 여부를 판단. (중복처리)
	{
		ans++;
	}

	if (start >= n)
	{
		return ;
	}

	sub(sum + value[start], start + 1, count + 1, true); // 포함
	sub(sum, start + 1, count, false); // 미포함

}
int main(void)
{
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> value[i];
	}
	sub(0,0,0,false);
	cout << ans;
}