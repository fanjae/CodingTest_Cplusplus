#include <stdio.h>
int main()
{
	int n;
	int data[105][15];
	int count[105]={0};
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=10; j++)
		{
			scanf("%d",&data[i][j]);
			if(((j-1)%5)+1 == data[i][j])
			{
				count[i]++;
			}
		}
	}
	for(int i=1; i<=n; i++)
	{
		if(count[i] == 10)
		{
			printf("%d\n",i);
		}
	}
}