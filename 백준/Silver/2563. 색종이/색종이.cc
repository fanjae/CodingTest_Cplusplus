#include <stdio.h>
int data[105][105]={0};
int count = 0;
int main(void)
{
	int n;
	int x,y;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d %d",&y,&x);
		for(int i=y+1; i<=y+10; i++)
		{
			for(int j=x+1; j<=x+10; j++)
			{
				data[j][i] = 1;
			}
		}
	}
	
	for(int i=1; i<=101; i++)
	{
		for(int j=1; j<=101; j++)
		{
			if(data[i][j] == 1)	count++;
		}
	}
	printf("%d\n",count);
}