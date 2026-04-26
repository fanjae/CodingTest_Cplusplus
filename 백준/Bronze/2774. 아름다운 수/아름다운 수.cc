#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int count[10]={0};
		int sum=0;
		char data[15];
		scanf("%s",data);
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] >= '0' && data[i] <= '9')
			{
				count[data[i]-48]++;
			}
		}
		for(int i=0; i<10; i++)
		{
			if(count[i] > 0)
			{
				sum++;
			}
		}
		printf("%d\n",sum);
	}
}