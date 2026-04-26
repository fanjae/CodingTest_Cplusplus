#include <stdio.h>
#include <math.h>
int main(void)
{
	int data[4];
	for(int i=0; i<4; i++)
	{
		scanf("%d",&data[i]);
	}
	for(int i=0; i<3; i++)
	{
		for(int j=i+1; j<4; j++)
		{
			if(data[i] < data[j])
			{
				int temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
	printf("%d\n",abs((data[0]+data[3])-(data[1]+data[2])));
}