#include <stdio.h>
int data[1005][1005]={0};
int main()
{
	int n,k;
	scanf("%d %d",&n,&k);
	
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			 if(j == 0 || j == i)
			 {
			 	data[i][j] = 1;
			 }
			 else
			 {
			 	data[i][j] = (data[i-1][j]+data[i-1][j-1])%10007;
			 }
		}
	}
	printf("%d\n",data[n][k]);
}
	