#include <iostream>
#include <algorithm>
#include <set>
#include <string>
using namespace std;
set <string> member;
int main(void)
{
	int n;
	int ans = 0;
	string str_value;
	cin >> n;
	while (n--)
	{
		cin >> str_value;
		if (str_value.compare("ENTER") == 0) // ENTER인 경우
		{
			member.clear(); // 집합 한번 비움.
		}
		else
		{
			if (member.find(str_value) == member.end()) // 집합에 없으면, 인사 해야함.
			{
				member.insert(str_value); // 인사한 애 넣어줌.
				ans++; // 인사 횟수 증가
			}
		}
	}
	cout << ans;
}