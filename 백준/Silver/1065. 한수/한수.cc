#include <stdio.h>
int main(void)
{
	int n;
	char data[10];
	int count=0;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		if(i <= 99)
		{
			count++;
		}
		if(i >= 100 && i <= 999)
		{
			sprintf(data,"%d",i);
			if((data[0]-data[1]) == (data[1]-data[2]))
			{
				count++;
			}	
		}
	}
	printf("%d\n",count);
}