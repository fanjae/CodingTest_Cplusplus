#include <iostream>
using namespace std;
int n, r, c;
int answer = 0;
void cutting(int n, int x, int y)
{
	if (x == r && y == c) 
	{
		cout << answer;
		return ;
	}

	if (r >= x && r < x + n && c >= y && c < y + n) // 사분면 탐색.
	{
		
		cutting(n / 2, x, y);
		cutting(n / 2, x, y + n / 2);
		cutting(n / 2, x + n / 2, y);
		cutting(n / 2, x + n / 2, y + n / 2);
	}
	else
	{
		// 속하지 않는 영역의 사분면의 크기를 더한다.
		answer += n * n;
	}
}
int main(void)
{
	cin >> n >> r >> c;
	cutting(1<<n, 0, 0);
}