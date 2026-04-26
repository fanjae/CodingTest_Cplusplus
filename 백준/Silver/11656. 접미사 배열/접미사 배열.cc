#include <stdio.h>
#include <string.h>
#include <algorithm>
using namespace std;
char data[1005][1005];
int main()
{
	char temp[1005];
	scanf("%s",temp);
	for(int i=0; i<strlen(temp); i++)
	{
		for(int j=0; j<strlen(temp)-i; j++)
		{
			data[i][j] = temp[j+i];
		}
	}
	for(int i=0; i<strlen(temp)-1; i++)
	{
		for(int j=i+1; j<strlen(temp); j++)
		{
			if(strcmp(data[i],data[j]) > 0)
			{
				char temp2[1005];
				strcpy(temp2,data[i]);
				strcpy(data[i],data[j]);
				strcpy(data[j],temp2);
			}
		}
	}
	for(int i=0; i<strlen(temp); i++)
	{
		printf("%s\n",data[i]);
	}
}