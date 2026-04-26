#include <stdio.h>
int main(void)
{
	while(1)
	{
		int data[3];
		int n;
		int position = 0;
		int max=0;
		scanf("%d %d %d",&data[0],&data[1],&data[2]);
		if(data[0] == 0 && data[1] == 0 && data[2] == 0)
		{
			break;
		}
		for(int i=0; i<3; i++)
		{
			if(max < data[i])
			{
				position = i;
				max = data[i];
			}
		}
		if(position == 0)
		{
			if(data[1] + data[2] <= data[0])
			{
				printf("Invalid\n");
				continue;
			}
		}
		else if(position == 1)
		{
			if(data[0] + data[2] <= data[1])
			{
				printf("Invalid\n");
				continue;
			}
		}
		else if(position == 2)
		{
			if(data[0] + data[1] <= data[2])
			{
				printf("Invalid\n");
				continue;
			}
		}
		
		if(data[0] == data[1] && data[1] == data[2])
		{
			printf("Equilateral\n");
			continue;
		}
		else if(data[0] != data[1] && data[1] != data[2] && data[0] != data[2])
		{
			printf("Scalene\n");
			continue;
		}
		else
		{
			printf("Isosceles\n");
			continue;
		}
	}
	
}