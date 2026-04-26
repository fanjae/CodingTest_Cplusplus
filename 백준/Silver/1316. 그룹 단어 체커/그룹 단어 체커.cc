// a 97 
#include <stdio.h>
#include <string.h>
int main()
{
	int count=0;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int flag = 1;
		char data[105];
		int set[26]={0};
		scanf("%s",data);
		for(int i=0; i<strlen(data); i++)
		{
			set[data[i]-97]++;
			if(set[data[i]-97] > 1)
			{
				if(data[i] != data[i-1])
				{
					flag = 0;
					break;
				}
			}
		}
		if(flag == 1)
		{
			count++;
		}
	}
	printf("%d\n",count);
}