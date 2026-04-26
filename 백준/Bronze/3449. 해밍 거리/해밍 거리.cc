#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d\n",&T);
	while(T--)
	{
		int count = 0;
		char data[105];
		char data2[105];
		gets(data);
		gets(data2);
		for(int i=0; i<strlen(data); i++)
		{
			if(data[i] != data2[i])
			{
				count++;
			}
		}
		printf("Hamming distance is %d.\n",count);
	}
}