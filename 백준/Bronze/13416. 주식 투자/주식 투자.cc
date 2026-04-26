#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[1005][3];
		int n;
		long long int ans = 0;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			for(int j=0; j<3; j++)
			{
				scanf("%d",&data[i][j]);
			}
		}
	
		for(int i=0; i<n; i++)
		{
			int max = 0;
			for(int j=0; j<3; j++)
			{
				if(data[i][j] > 0 && max < data[i][j])
				{
					max = data[i][j];	
				}
			}
			ans += max;
		}
		printf("%lld\n",ans);
	}
}