#include <stdio.h>
int main()
{
	int n=1;
	int T;
	int max;
	int data[1005]={0};
	scanf("%d",&T);
	while(T--)
	{
		int temp;
		int flag=1;
		for(int i=0; n*(n+1)/2 <= 1000; i++)
		{
			data[i] = n * (n + 1) / 2;
			n++;
			max = i;
		}
		scanf("%d",&temp);
		for(int i=0; i<=max; i++)
		{
			for(int j=0; j<=max; j++)
			{
				for(int k=0; k<=max; k++)
				{
					if(data[i]+data[j]+data[k] == temp && flag != 0)
					{
						printf("1\n");
						flag = 0;
						break;
					}
				}
			}
		}
		if(flag == 1)
		{
			printf("0\n");
		}
	}
}