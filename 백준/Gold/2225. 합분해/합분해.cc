#include <stdio.h>
#define MOD 1000000000
int main(void)
{
	int data[205][205]={0};
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=0; i<=k; i++)
	{
		data[0][i] = 1;
	}

	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=k; j++)
		{
			int sum = 0;
			for(int l=j; l>=1; l--)
			{
				sum = sum + data[i-1][l];
				sum = sum % MOD;
			}
			data[i][j] = sum;
		}
	}
	printf("%d\n",data[n][k] % MOD);
}