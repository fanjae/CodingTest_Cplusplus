#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int a,b;
		int len;
		char data[1000005];
		scanf("%d %d\n",&a,&b);
		gets(data);
		len = strlen(data);
		for(int i=0; i<len; i++)
		{
			int e;
			e = (a * data[i]-65 + b) % 26;
			printf("%c",e+65);
		}
		printf("\n");
	}
}