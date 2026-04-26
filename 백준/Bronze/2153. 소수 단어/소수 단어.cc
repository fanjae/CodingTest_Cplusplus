#include <stdio.h>
#include <string.h>
int main(void)
{
	int len;
	int cnt = 0;
	int ans = 0;
	char data[25];
	scanf("%s",data);
	
	len = strlen(data);
	
	for(int i=0; i<len; i++)
	{
		if(data[i] >= 'a' && data[i] <= 'z')
		{
			ans += (data[i] - 'a') + 1;
		}
		else if(data[i] >= 'A' && data[i] <= 'Z')
		{
			ans += (data[i] - 'A') + 27;
		}
	}
	for(int i=1; i<=ans; i++)
	{
		if(ans % i == 0)
		{
			cnt++;	
		}
	}
	if(ans == 1 || cnt == 2)
	{
		printf("It is a prime word.\n");
	}
	else
	{
		printf("It is not a prime word.\n");
	}
}