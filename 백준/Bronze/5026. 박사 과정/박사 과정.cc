#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int index = 0;
		int su;
		int su2;
		int v = 1;
		su = su2 = 0;
		char data[105];
		scanf("%s",data);
		if(strcmp(data,"P=NP") == 0)
		{
			printf("skipped\n");
		}
		else
		{
			for(int i=0; i<strlen(data); i++)
			{
				if(data[i] == '+')
				{
					index = i;
					break;
				}
			}
			for(int i=index-1; i>=0; i--)
			{
				su = su + (data[i] - '0') * v;
				v *= 10;
			}
			v = 1;
			for(int i=strlen(data)-1; i>index; i--)
			{
				su2 = su2 + (data[i] - '0') * v;
				v *= 10;
			}
			printf("%d\n",su+su2);
		}
	}
}