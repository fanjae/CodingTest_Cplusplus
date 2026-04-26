#include <stdio.h>
#include <stdbool.h>
bool data[105][105];
int main(void)
{
	int x1,y1,x2,y2;
	int count=0;
	for(int i=1; i<=4; i++)
	{
		scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
		for(int x=x1; x<x2; x++)
		{
			for(int y=y1; y<y2; y++)
			{
				data[x][y] = true;
			}
		}
	}
	
	for(int i=1; i<105; i++)
	{
		for(int j=1; j<105; j++)
		{
			if(data[i][j] == 1)
			{
				count++;
			}
		}
	}
	printf("%d\n",count);
}