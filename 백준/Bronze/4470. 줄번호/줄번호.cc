#include <stdio.h>
int main(void)
{
	int i=1;
	int n;
	scanf("%d ",&n);
	while(n--)
	{
		char data[55];
		gets(data);
		printf("%d. %s\n",i++,data);
	}
}