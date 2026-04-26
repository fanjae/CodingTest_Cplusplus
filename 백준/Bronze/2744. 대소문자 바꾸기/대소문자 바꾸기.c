#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[105];
	int i;
	scanf("%s",a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i] >= 'A' && a[i] <= 'Z')
		{
			a[i] = a[i] + 32;
		}
		else if(a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	printf("%s",a);
}