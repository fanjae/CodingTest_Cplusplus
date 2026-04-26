#include <stdio.h>
#include <string.h>
int main()
{
	int sum = 0;
	char data[20];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] >= 65 && data[i] <= 67)
		{
			sum += 3;
		}
		else if(data[i] >= 68 && data[i] <= 70)
		{
			sum += 4;
		}
		else if(data[i] >= 71 && data[i] <= 73)
		{
			sum += 5;
		}
		else if(data[i] >= 74 && data[i] <= 76)
		{
			sum += 6;
		}
		else if(data[i] >= 77 && data[i] <= 79)
		{
			sum += 7;
		}
		else if(data[i] >= 80 && data[i] <= 83)
		{
			sum += 8;
		}
		else if(data[i] >= 84 && data[i] <= 86)
		{
			sum += 9;
		}
		else if(data[i] >= 87 && data[i] <= 90)
		{
			sum += 10;
		}
	}
	printf("%d\n",sum);
}