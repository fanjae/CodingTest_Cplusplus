#include <stdio.h>
int main(void)
{
	char data[10];
	int n,ans_count=0;
	scanf("%d",&n);
	for(int i=666; i<=2999999; i++)
	{
		int len;
		sprintf(data,"%d",i);
		if(i >= 666 && i <= 999)
		{
			len = 3;
		}
		else if(i >=1000 && i <= 9999)
		{
			len = 4;
		}
		else if(i >= 10000 && i <= 99999)
		{
			len = 5;
		}
		else if(i >= 100000 && i <= 999999)
		{
			len = 6;
		}
		else if(i >= 1000000 && i <= 9999999)
		{
			len = 7;
		}
		int max_count = 0;
		int count = 1;
		for(int j = 1; j < len; j++)
		{
			if(data[j] == '6' && j >= 1)
			{
				if(data[j-1] == '6')
				{
					count++;
				}
				else
				{
					if(max_count < count)
					{
						max_count = count;
						count = 1;
					}
				}
			}
		}
		if(max_count < count)
		{
			max_count = count;
			count = 1;
		}
		if(max_count >= 3)
		{
			ans_count++;
		}
		if(ans_count == n)
		{
			printf("%d\n",i);
			return 0;
		}
	}
}
	