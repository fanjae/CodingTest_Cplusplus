#include <stdio.h>
int main(void)
{
	int data[1005][10];
	int max[1005]={0};
	int n;
	int index;
	int max2=0;
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<5; j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<=2; j++)
		{
			for(int k=j+1; k<=3; k++)
			{
				for(int l=k+1; l<=4; l++)
				{
					if(max[i] < (data[i][j] + data[i][k] + data[i][l]) % 10)
					{
					    max[i] = (data[i][j] + data[i][k] + data[i][l]) % 10; 
					}
				}
			}
		}
	}
	for(int i=0; i<n; i++)
	{
		if(max2 <= max[i])
		{
			max2 = max[i];
			index = i;
		}
	}
	printf("%d\n",index+1);
}