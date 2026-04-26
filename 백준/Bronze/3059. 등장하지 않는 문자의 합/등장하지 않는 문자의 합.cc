#include <stdio.h>
#include <string.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[1005];
		int sum=0;
		int set[28]={0};
		scanf("%s",data);
		for(int i=0; i<strlen(data); i++)
		{
			set[data[i]-65]++;
		}
		for(int i=0; i<26; i++)
		{
			if(set[i] == 0)
			{
				sum += (char) i+65;
			}
		}
		printf("%d\n",sum);
	}
}