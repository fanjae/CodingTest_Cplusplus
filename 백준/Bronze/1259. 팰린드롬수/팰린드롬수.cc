#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(void)
{
	int n = 1;
	while(n != 0)
	{
		int count = 0;
		int len;
		bool ans = true;
		char data[6];
		scanf("%d",&n);
		if(n == 0)
		{
			break;
		}
		sprintf(data,"%d",n);
		len = strlen(data);
		
		int s = 0;
		int e = len-1;
		while(s < e)
		{
			if(data[s++] != data[e--])
			{
				ans = false;
			}
		}
		if(ans)
		{
			printf("yes\n");
		}
		else
		{
			printf("no\n");
		}
	}
}