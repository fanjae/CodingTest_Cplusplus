#include <stdio.h>
#include <string.h>
int main(void)
{
	char temp[1005];
	int cnt = 0 ;
	while(1)
	{
		fgets(temp,1005,stdin);
		if(strcmp(temp,"고무오리 디버깅 끝\n") == 0)
		{
			break;
		}
		if(strcmp(temp,"고무오리\n") == 0)
		{
			if(cnt == 0)
			{
				cnt += 2;
			}
			else
			{
				cnt--;
			}
		}
		if(strcmp(temp,"문제\n") == 0)
		{
			cnt++;
		}
	}
	if(cnt > 0)
	{
		printf("힝구\n");
	}
	else if(cnt == 0)
	{
		printf("고무오리야 사랑해\n");
	}
		
}
		
		