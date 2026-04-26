#include <stdio.h>
#include <string.h>
char data[50005];
int ans[10];
int main(void)
{
	unsigned long long int value;
	unsigned long long a,b,c;
	int data_len;
	
	scanf("%llu %llu %llu",&a,&b,&c);
	value = a * b * c;
	sprintf(data,"%llu",value);
	data_len = strlen(data);
	
	for(int i=0; i<data_len; i++)
	{
		if(data[i] >= '0' && data[i] <= '9')
		{
			ans[data[i]-'0']++;
		}
	}
	
	for(int i=0; i<10; i++)
	{
		printf("%d\n",ans[i]);
	}
}
	