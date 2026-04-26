#include <stdio.h>
#include <string.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int count[8]={0};
		char data[45];
		scanf("%s",data);
		for(int i=0; i<strlen(data)-2; i++)
		{
			if(data[i] == 'T' && data[i+1] == 'T' && data[i+2] == 'T')
			{
				count[0]++;
			}
			else if(data[i] == 'T' && data[i+1] == 'T' && data[i+2] == 'H')
			{
				count[1]++;
			}
			else if(data[i] == 'T' && data[i+1] == 'H' && data[i+2] == 'T')
			{
				count[2]++;
			}
			else if(data[i] == 'T' && data[i+1] == 'H' && data[i+2] == 'H')
			{
				count[3]++;
			}
			else if(data[i] == 'H' && data[i+1] == 'T' && data[i+2] == 'T')
			{
				count[4]++;
			}
			else if(data[i] == 'H' && data[i+1] == 'T' && data[i+2] == 'H')
			{
				count[5]++;
			}
			else if(data[i] == 'H' && data[i+1] == 'H' && data[i+2] == 'T')
			{
				count[6]++;
			}
			else if(data[i] == 'H' && data[i+1] == 'H' && data[i+2] == 'H')
			{
				count[7]++;
			}
		}
		for(int i=0; i<8; i++)
		{
			printf("%d ",count[i]);
		}
	}
}