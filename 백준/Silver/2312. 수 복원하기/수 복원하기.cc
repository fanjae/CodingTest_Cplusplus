#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <vector>

using namespace std;
vector <int> prime;
void eratos()
{
	bool arr[100005]={0};
	for(int i=2; i<=100000; i++)
	{
		arr[i] = true;
	}
	
	for(int i=2; i<=100000; i++)
	{
		if(arr[i] == false)
		{
			continue;
		}
		for(int j=i+i; j<=100000; j+=i)
		{
			arr[j] = false;
		}
	}
	
	for(int i=2; i<=100000; i++)
	{
		if(arr[i] == true)
		{
			prime.push_back(i);
		}
	}
}
int main(void)
{
	eratos();
	int prime_size = prime.size();
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int n;
		int temp_n;
		int index = 0;
		scanf("%d",&n);
		
		temp_n = n;
		while(temp_n != 1)
		{
			int count = 0;
			bool find = false;
			while(temp_n % prime[index] == 0)
			{
				temp_n = temp_n / prime[index];
				count++;
				find = true;
			}
			if(find)
			{
				printf("%d %d\n",prime[index],count);
			}
			index++;	
		}
	}
}