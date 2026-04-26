//A 65
#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[25];
		char data2[25];
		scanf("%s %s",data,data2);
		printf("Distances: ");
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] <= data2[i])
			{
				printf("%d ",data2[i]-data[i]);
			}
			else
			{
				printf("%d ",data2[i]+26-data[i]);
			}
		}
		printf("\n");
	}
}