#include<stdio.h>
int main()
{
	int sum=0;
	int data[10];
	int rank[10];
	for(int i=0;i<8;i++)
	{
		scanf("%d",&data[i]);
		rank[i] = 1;
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(data[i] > data[j])
			{
				rank[j]++;
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		if(rank[i] <= 5)
		{
			sum += data[i];
		}
	}
	printf("%d\n",sum);
	for(int i=0;i<8;i++)
	{
	   if(rank[i] <= 5)
		{
		   printf("%d ",i+1);
		}
	}
}