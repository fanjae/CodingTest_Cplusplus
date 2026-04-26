#include <stdio.h>
#include <string.h>
int main()
{
	int count = 1;
	int tool[10]={1,1,1,1,1,1,1,1,1,1}; 
	            //0,1,2,3,4,5,6,7,8,9
	char data[15];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		if(tool[data[i]-'0'] > 0)
		{
			tool[data[i]-'0']--;
		}
		else if(data[i] == '6' && tool[9] > 0)
		{
			tool[9]--;
		}
		else if(data[i] == '9' && tool[6] > 0)
		{
			tool[6]--;
		}
		else
		{
			count++;
			for(int j=0; j<10; j++)
			{
				tool[j]++;
			}
			tool[data[i]-'0']--;
		}
	}
	printf("%d\n",count);
}