#include <stdio.h>
#include <vector>

#define LIMIT 1300000

using namespace std;
vector <int> prime;
bool arr[2000005];

void eratos()
{
	for(int i=2; i<=LIMIT; i++)
	{
		arr[i] = true;
	}
	
	for(int i=2; i<=LIMIT; i++)
	{
		if(arr[i] == false)
		{
			continue;
		}
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

int main(void)
{
	int T;
	eratos();
	scanf("%d",&T);
	while(T--)
	{
		int n;
		bool flag = false;
		int index = 0;
		scanf("%d",&n);
		for(int i=0; ; i++)
		{
			if(prime[i] == n)
			{
				printf("0\n");
				flag = true;
			}
			if(prime[i] > n)
			{
				index = i;
				break;
			}
		}
		if(flag == false)
		{
			printf("%d\n",prime[index]-prime[index-1]);
		}
	}
}
	
	