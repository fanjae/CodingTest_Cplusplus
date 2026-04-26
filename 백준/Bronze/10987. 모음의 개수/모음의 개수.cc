#include <stdio.h>
#include <string.h>
int main()
{
	int cnt=0;
	char data[105];
	scanf("%s",data);
	for(int i=0; i<strlen(data); i++)
	{
		if(data[i] == 'a' || data[i] == 'e' || data[i] == 'i' || data[i] == 'o' || data[i] == 'u')
		{
			cnt++;
		}
	}
	printf("%d\n",cnt);
}