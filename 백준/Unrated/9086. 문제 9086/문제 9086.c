#include <stdio.h>
#include <string.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char a[1005];
		scanf("%s",&a);
		printf("%c%c\n",a[0],a[strlen(a)-1]);
	}
}