#include <stdio.h>
int main(void)
{
	int n,m;
	long long int sum = 0;
	int data[1005];
	scanf("%d %d",&n,&m);
	for(int i=0; i<m; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(i % data[j] == 0)
			{
				sum += i;
				break;
			}
		}
	}
	printf("%d\n",sum);
}