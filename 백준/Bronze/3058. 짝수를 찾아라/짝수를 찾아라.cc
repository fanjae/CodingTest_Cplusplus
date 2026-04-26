#include <stdio.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int data[7];
		int i;
		int min=105;
		int sum=0;
		for(i=0;i<7;i++)
		{
			scanf("%d",&data[i]);
			if(data[i]%2==0)
			{
				sum += data[i];
				if(min > data[i])
				{
					min = data[i];
				}
			}
		}
		printf("%d %d\n",sum,min);
	}
}