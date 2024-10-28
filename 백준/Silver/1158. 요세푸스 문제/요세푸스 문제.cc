#include <iostream>
#include <list>
using namespace std;

int main(void)
{
	int n, k;
	int cnt = 0;
	list <int> josephus;
	list <int>::iterator iter;

	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		josephus.push_back(i);
	}

	iter = josephus.begin();
	cnt = k;
	for (int i = 0; i < k-1; i++)
	{
		iter++;	
	}
	
	cout << "<";
	while (!josephus.empty())
	{
		if (cnt == k)
		{
			cnt = 1;
			if (josephus.size() > 1) // 1개 이상인 경우 출력할 값이 더있음.
			{
				cout << *iter << ", ";
			}
			else
			{
				cout << *iter << ">";
			}
			iter = josephus.erase(iter);
			if (iter == josephus.end()) // 끝 도달한 경우 다시 맨 앞 이동
			{
				iter = josephus.begin();
			}
		}
		else
		{
			iter++;
			cnt++;
			if (iter == josephus.end()) // 끝 도달한 경우 다시 맨 앞 이동
			{
				iter = josephus.begin();
			}
		}
		
	}
}