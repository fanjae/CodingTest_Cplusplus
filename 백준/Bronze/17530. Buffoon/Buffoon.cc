#include <stdio.h>
int main(void)
{
	int max = 0;
	int n;
	int max_position = 0;
	int data[10005];
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
		if(max < data[i])
		{
			max = data[i];
			max_position = i + 1;
		}
	}
	if(max_position == 1)
	{
		printf("S");
	}
	else
	{
		printf("N");
	}
}