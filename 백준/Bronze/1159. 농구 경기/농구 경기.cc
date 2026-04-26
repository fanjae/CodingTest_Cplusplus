//A 65 a 97
#include <stdio.h>
int main()
{
	int flag = 0;
	int count[26]={0};
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[35];
		scanf("%s",data);
		count[data[0]-97]++;
	}
	for(int i=0; i<26; i++)
	{
		if(count[i] >= 5)
		{
			flag = 1;
			printf("%c",i+97);
		}
	}
	if(!flag)
	{
		printf("PREDAJA\n");
	}
}