#include <stdio.h>
#include <string.h>
char data[1005]="1";
int sum_cal(int len)
{
	int sum = 0;
	for(int i = 0; i < len; i++)
	{
		sum += (data[i] - '0');
	}
	return sum;
}
int digital_root(int sum)
{
	int value = 0;
	while(sum >= 1)
	{
		value += sum % 10;
		sum /= 10;
		if(value >= 10)
		{
			sum = value;
			value = 0;
		}
	}
	return value;
}
int main(void)
{
	int len;
	int sum = 0;
	int ans;
	while(data[0] != '0')
	{
		gets(data);
		if(strcmp(data,"0") == 0)
		{
			break;
		}
		len = strlen(data);
		sum = sum_cal(len);
		ans = digital_root(sum);
		printf("%d\n",ans);
	}
}