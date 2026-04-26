#include <iostream>
#include <vector>
using namespace std;
#define LIMIT 4000000
int n;
bool arr[4000005];
vector <int> prime;
void eratos()
{
	for(int i=1; i<=LIMIT; i++)
	{
		arr[i] = true;
	}
 
	for(int i=2; i<=LIMIT; i++)
	{
		if(arr[i] == false) continue;
		for(int j=i+i; j<=LIMIT; j+=i)
		{
			arr[j] = false;
		}
	}
	for(int i=2; i<=LIMIT; i++)
	{
		if(arr[i] == true)
		{
			prime.push_back(i);
		}
	}
}
int main() 
{
	int start,end;
	int cnt = 0;
	int sum = 0;
	int prime_size;
	start = end = 0;
 
	scanf("%d",&n);
	if(n == 1)
	{
		printf("0");
		return 0;
	}
	eratos();
 
	prime_size = prime.size();
	while(start < prime_size && end < prime_size && start <= end && prime[start] <= n)
	{
		if(sum + prime[end] < n)
		{
			sum = sum + prime[end];
			end++;
		}
		else if(sum + prime[end] == n)
		{
			sum = 0;
			start++;
			end = start;
			cnt++;
		}
		else if(sum + prime[end] > n)
		{
			sum = sum - prime[start];
			start++;
		}
	}
	printf("%d\n",cnt);
	return 0;
}