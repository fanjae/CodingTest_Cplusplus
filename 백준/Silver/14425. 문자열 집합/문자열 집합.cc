#include <iostream>
#include <set>
#include <algorithm>
#include <string>
using namespace std;
set <string> set_value;
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		string value;
		cin >> value;
	
		set_value.insert(value); // 입력 받은 문자열을 set에 넣음
	}
	for (int j = 0; j < m; j++)
	{
		string value;
		cin >> value;

		set <string>::iterator set_iter; // iterator 선언
		set_iter = set_value.find(value); // 집합에 존재하는지 찾음
		if (set_iter != set_value.end()) // 집합에 포함되어 있는 경우, 증가
		{
			cnt++;
		}
	}
	cout << cnt;

}

