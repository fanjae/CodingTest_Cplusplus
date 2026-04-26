#include <stdio.h>
int main(void)
{
	int a[3][4],i,j;
	int n;
	int sum[3]={0};
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
			sum[i] += a[i][j]; 
		}
	}
	for(i=0;i<3;i++)
	{
		if(sum[i] == 3)
		{
			printf("A\n");
		}
		else if(sum[i] == 2)
		{
			printf("B\n");
		}
		else if(sum[i] == 1)
		{
			printf("C\n");
		}
		else if(sum[i] == 0)
		{
			printf("D\n");
		}
		else
		{
			printf("E\n");
		}
	}

}