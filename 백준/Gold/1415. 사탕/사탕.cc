#pragma warning (disable:4996)
#include <stdio.h>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;
long long int set[500005] = { 0 };
int candy[100005] = { 0 };
int prime_temp[500005] = { 0 };
void eratos(int sum)
{
	for (int i = 2; i <= sum; i++)
	{
		prime_temp[i] = 1;
	}
	for (int i = 2; i <= sqrt(sum); i++)
	{
		if (prime_temp[i] == 0)
		{
			continue;
		}
		for (int j = i + i; j <= sum; j += i)
		{
			prime_temp[j] = 0;
		}
	}
}
int main(void)
{
	int n;
	int sum = 0;
	long long int iszero = 1;
	long long int ans = 0;
	vector<int> data;
	data.push_back(0);

	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int temp;
		scanf("%d", &temp);
		sum += temp;
		
		if (temp == 0)
		{
			iszero++;
			continue;
		}
		if (candy[temp] == 0) data.push_back(temp); // 무게와 가치가 같음
		
		candy[temp]++;
	}

	eratos(sum);
	set[0] = 1;
	for (int i = 1; i < data.size(); i++)
	{
		for (int j = sum; j >= 0; j--)
		{
			for (int k = 1; k <= candy[data[i]]; k++)
			{
				if (j + k * data[i] > sum || j + k * data[i] < 0) break;
				set[j + k * data[i]] += set[j];
			}
		}
	}
	for (int i = 2; i <= sum; i++) {
		if (prime_temp[i] != 0)
		{
			ans += set[i];
		}
	}
	printf("%lld\n", ans * iszero);
}