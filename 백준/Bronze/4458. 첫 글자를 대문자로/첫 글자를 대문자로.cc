#include <stdio.h>
#include <ctype.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	getchar();
	while(T--)
	{
		char data[35];
		gets(data);
		data[0] = toupper(data[0]);
		puts(data);
	}
}