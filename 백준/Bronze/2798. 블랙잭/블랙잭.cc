#include <stdio.h>
int data[105];
int main()
{
	int sum=0;
	int max=-100005;
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k=j+1;k<n;k++)
			{
				sum = data[i]+data[j]+data[k];
				if(sum <= m && sum > max)
				{
				    max = sum;
				}
			}
		}
	}
	printf("%d\n",max);
}