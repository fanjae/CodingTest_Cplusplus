#include <stdio.h>
int main(void)
{
	int T=1;
	while(T != -1)
	{
		int data[15]={0};
		int su=1,i=0,count=0;
		scanf("%d",&T);
		if(T == -1)
		{
			break;
		}
		else if(T != 0)
		{
			data[i++] = T;
		}
		
		while(su != 0)
		{
			scanf("%d",&su);
			
			if(su == 0)
			{
				break;
			}
			else
			{
				data[i++] = su;
			}
		}
		for(int j=0; j<i; j++)
		{
			for(int k=0; k<i; k++)
			{
				if(j == k)
				{
					continue;
				}
				if(data[j] * 2 == data[k])
				{
					count++;
				}
			}
		}
		printf("%d\n",count);
	}
}