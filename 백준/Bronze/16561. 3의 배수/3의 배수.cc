#include <stdio.h>
int ans = 0;
int main(void)
{
	int n;
	int su = 0;
	int data[1005]={0};
	scanf("%d",&n);
	for(int i=3; i<=n; i+=3)
	{
		data[su++] = i;
	}
	for(int i=0; i<su; i++)
	{
		for(int j=0; j<su; j++)
		{
			if(data[i] + data[j] >= n)
			{
				continue;
			}
			ans++;
		}
	}
	printf("%d\n",ans);
}
