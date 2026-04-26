#include <stdio.h>

int w,n,arr[5005];
int weight[800000]={0};
int main(void)
{
	scanf("%d %d",&w,&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<n; i++)
	{
		for(int j = i+1; j<n; j++)
		{
			if(arr[i] + arr[j] > w)
			{
				continue;
			}
			else if(weight[w - arr[i] - arr[j]] == 1)
			{
				printf("YES");
				return 0;
			}
		}
		for(int j=0; j<i; j++)
		{
			if(arr[i]+arr[j] < w)
			{
				weight[arr[i] + arr[j]] = 1;
			}
		}
	}
	printf("NO");
	return 0;
}
