#include <stdio.h>
int main(void)
{
	int in,out;
	char type;
	while(1)
	{
		int value;
		scanf("%d %c %d",&in,&type,&out);
		if(in == 0 && type == 'W' && out == 0)
		{
			break;
		}
		if(type == 'W')
		{
			value = in - out;
		}
		if(type == 'W' && value < -200)
		{
			printf("Not allowed\n");
			continue;
		}
		if(type == 'W')
		{
			printf("%d\n",in-out);
			continue;
		}
		else if(type == 'D')
		{
			printf("%d\n",in+out);
			continue;
		}
	}
}