#include <stdio.h>
#include <math.h>
int ans;
int arr[1005]={0};
int eratos(int n, int k)
{
	int count = 0;
	for(int i=2; i<=n; i++)
	{
		arr[i] = 1;
	}
	for(int i=2; i<=n; i++)
	{
		if(arr[i] == 0)
		{
			continue;
		}
		for(int j=i; j<=n; j+=i)
		{
			if(arr[j] == 0)
			{
				continue;
			}
			arr[j] = 0;
			count++;
			if(k == count)
			{
				return j;
			}
		}
	}
}
int main(void)
{
	int n,k;
	scanf("%d %d",&n,&k);

	ans = eratos(n,k);
	printf("%d\n",ans);
}