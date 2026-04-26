#include <stdio.h>
int main()
{
	int T;
	int data[5]={0};
	scanf("%d",&T);
	while(T--)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		if(x == 0 || y == 0)
		{
			data[4]++;
		}
		else if(x > 0 && y > 0)
		{
			data[0]++;
		}
		else if(x < 0 && y > 0)
		{
			data[1]++;
		}
		else if(x < 0 && y < 0)
		{
			data[2]++;
		}
		else if(x > 0 && y < 0)
		{
			data[3]++;
		}
	}
	for(int i=0; i<5; i++)
	{
		if(i < 4)
		{
			printf("Q%d: %d\n",i+1,data[i]);
		}
		else
		{
			printf("AXIS: %d\n",data[i]);
		}
	}
}