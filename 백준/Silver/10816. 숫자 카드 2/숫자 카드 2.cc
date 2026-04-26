#include <stdio.h>
#include <math.h>
#include <algorithm>
int plus[10000005];
int minus[10000005];
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int temp;
		scanf("%d",&temp);
		if(temp >= 0)
		{
			plus[temp]++;
		}
		else
		{
			minus[abs(temp)]++;
		}
	}
	int m;
	scanf("%d",&m);
	for(int i=0; i<m; i++)
	{
		int temp;
		scanf("%d",&temp);
		if(temp >= 0)
		{
			printf("%d ",plus[temp]);
		}
		if(temp < 0)
		{
			printf("%d ",minus[abs(temp)]);
		}
	}
		
}