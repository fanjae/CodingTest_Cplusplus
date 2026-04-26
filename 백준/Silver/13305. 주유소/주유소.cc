#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100005
long long int value[MAX];
long long int dis[MAX];
long long int oil_cost[MAX];
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;

	long long int cost = 0;
	cin >> n;

	for (int i = 1; i <= n - 1; i++)
	{
		cin >> dis[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> oil_cost[i];
	}
	cost = oil_cost[1] * dis[1]; // 첫번째 주유소는 무조건 한번 거쳐야 한다.
	int min_value = oil_cost[1]; // 첫번째 주유소 값이 최소이므로, 우선 최소값으로 선정. 

	for (int i = 2; i <= n; i++)
	{
		if (min_value > oil_cost[i]) // 더 싼 주유소를 찾았다면 그 주유소에서 기름을 최대한 넣어가는게 좋다.
		{
			min_value = oil_cost[i];
		}
		cost += (min_value * dis[i]);
	}
	cout << cost;

}