//A : 65
#include <stdio.h>
#include <string.h>
int main()
{
	long long int num=0;
	char data[30];
	int b;
	int mul=1;
	scanf("%s",data);
	scanf("%d",&b);
	for(int i=strlen(data)-1; i>=0; i--)
	{
		if(data[i] >= 'A' && data[i] <= 'Z')
		{
			num += (data[i] - '\0' - 55) * mul;
			mul *= b;
		}
		else
		{
			num += (data[i] -  '\0' - 48) * mul;
			mul *= b;
		}
	}
	printf("%lld\n",num);
}