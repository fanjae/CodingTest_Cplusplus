#include <stdio.h>
#include <algorithm>
using namespace std;
bool compare(int a, int b)
{
	return a<b;	
}
int main(void)
{
	int n;
	int k;
	int data[10005];
	int sum[10005]={0};
	int ans=0;
	scanf("%d",&n);
	scanf("%d",&k);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	sort(data,data+n,compare);
	for(int i=0; i<n-1; i++)
	{
		sum[i] = data[i+1] - data[i];
	}
	sort(sum,sum+n-1,compare);
	for(int j=0; j<k-1; j++)
	{
		sum[n-2-j] = 0;
	}
	for(int i=0;i<n-1; i++)
	{
		ans += sum[i];
	}
	printf("%d\n",ans);
}