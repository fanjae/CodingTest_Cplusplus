#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		float n;
		char data[105];
		scanf("%f ",&n);
		gets(data);
		for(int i=0; i<strlen(data);i++)
		{
			if(data[i] == '@')
			{
				n *= 3;
			}
			else if(data[i] == '%')
			{
				n += 5;
			}
			else if(data[i] == '#')
			{
				n -= 7;
			}
		}
		printf("%.2f\n",n);
	}
}