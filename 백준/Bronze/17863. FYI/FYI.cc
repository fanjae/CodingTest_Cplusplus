#include <stdio.h>
int main(void)
{
	int data[7];
	for(int i=0; i<7; i++)
	{
		scanf("%1d",&data[i]);
	}
	if(data[0] == 5 && data[1] == 5 && data[2] == 5)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}