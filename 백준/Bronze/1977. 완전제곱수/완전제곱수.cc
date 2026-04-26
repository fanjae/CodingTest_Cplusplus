#include <stdio.h>
int main(void)
{
	int n,m;
	int min=10005;
	int sum=0;
	scanf("%d %d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(j*j > i)
			{
				break;
			}
			else if(j*j == i)
			{
				sum += j*j;
				if(j*j < min)
				{
					min = j*j;
				}
				break;
			}
		}
	}
	if(sum != 0)
	{
	    printf("%d\n",sum);
		printf("%d\n",min);
	}
	else
	{
		printf("-1\n");
	}
}