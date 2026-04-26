#include <stdio.h>
int main(void)
{
	int data[35][35]={0};
	int n,k;
	scanf("%d %d",&n,&k);
	for(int i=1; i<=n; i++)
	{
		data[i][1] = 1;
	}
	for(int i=2; i<=n; i++)
	{
		for(int j=2; j<=i; j++)
		{
			data[i][j] = data[i-1][j-1] + data[i-1][j];
		}
	}
	
	printf("%d\n",data[n][k]);
}