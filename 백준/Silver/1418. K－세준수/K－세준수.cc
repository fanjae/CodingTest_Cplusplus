#include <stdio.h>
#include <algorithm>
int data[100005];
int n,k;
using namespace std;
void prime()
{
	for(int i=2; i<=n; i++)
	{
		if(data[i])
		{
			continue;
		}
		for(int j=i; j<=n; j+=i)
		{
			data[j] = max(data[j],i);
		}
	}
}
int main(void)
{
	int ans = 0;
	scanf("%d %d",&n,&k);
	prime();
	for(int i=1; i<=n; i++)
	{
		if(data[i] <= k)
		{
			ans++;
		}
	}
	
	printf("%d\n",ans);
}