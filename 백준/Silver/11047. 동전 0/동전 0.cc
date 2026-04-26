#include <stdio.h>
#include <algorithm>
using namespace std;
bool cmp(int a, int b)
{
	return a>b;
}
int main()
{
	int su[10];
	int n;
	int count=0;
	int index=0;
	long long int k;
	scanf("%d %lld",&n,&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&su[i]);
	}
	sort(su,su+n,cmp);
	while(k > 0)
	{
		if(k - su[index] >= 0)
		{
			count++;
			k -= su[index];
		}
		else
		{
			index++;
		}
	}
	printf("%d\n",count);
}
	