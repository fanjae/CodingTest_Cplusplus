#include <stdio.h>
#include <string.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int su;
		int len;
		char data[105];
		scanf("%s",data);
		len = strlen(data);
		su = data[len-1]-'0';
		if(su % 2 == 0)
		{
			printf("even\n");
		}
		else
		{
			printf("odd\n");
		}
	}
}