#include <iostream>
using namespace std;
void move(int n, int from, int to, int via) // 원판 N을 from 기둥에서 to 기둥으로 옮김. via (보조 기둥) 
{
	// n번째 원판을 a->c로 옮기려면, n-1번째 원판을 모두 a->b로 옮겨야함.
	// n-1번째 원판을 a->b로 옮기려면, n-2번째 원판을 모두 a->c로 옮겨야함. (대충 이런식으로 반복)
	if (n == 1)
	{
		cout << from << " " << to << "\n";
	}
	else
	{
		move(n - 1, from, via, to); // 1) N-1번째 원판을 from에서 via로 옮김. (a->b)
		cout << from << " " << to << "\n"; // 2) N번째 원판을 from에서 to로 옮김.
		move(n - 1, via, to, from); // 3) via로 옮겼던 N-1번째 원판을 다시 to로 옮김. 
	}
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	cout << (1 << n)-1 << "\n"; // 2^n-1
	
	move(n, 1, 3, 2); // n번째 원판을 기둥 1번에서 3번으로 이동.
}