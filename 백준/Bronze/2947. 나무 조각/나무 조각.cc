#include <stdio.h>
int main()
{
	int data[10];
	for(int i=0; i<5; i++)
	{
		scanf("%d",&data[i]);
	}
	while(data[0] != 1 || data[1] != 2 || data[2] != 3 || data[3] != 4 || data[4] != 5)
	{
		if(data[0] > data[1])
		{
			int temp;
			temp = data[0];
			data[0] = data[1];
			data[1] = temp;
			for(int i=0; i<5; i++)
			{
				printf("%d ",data[i]);
			}
			printf("\n");
		}
		if(data[1] > data[2])
		{
			int temp;
			temp = data[1];
			data[1] = data[2];
			data[2] = temp;
			for(int i=0; i<5; i++)
			{
				printf("%d ",data[i]);
			}
			printf("\n");
		}
		if(data[2] > data[3])
		{
			int temp;
			temp = data[2];
			data[2] = data[3];
			data[3] = temp;
			for(int i=0; i<5; i++)
			{
				printf("%d ",data[i]);
			}
			printf("\n");
		}
		if(data[3] > data[4])
		{
			int temp;
			temp = data[3];
			data[3] = data[4];
			data[4] = temp;
			for(int i=0; i<5; i++)
			{
				printf("%d ",data[i]);
			}
			printf("\n");
		}
	}
}