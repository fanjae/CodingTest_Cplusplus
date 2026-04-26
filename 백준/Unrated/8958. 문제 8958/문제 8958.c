#include <stdio.h>
#include <string.h>
int main(void)
{
	char a[90];
	int T;
	int i;
	int sum;
	int score;
	scanf("%d",&T);
	while(T--)
	{
		sum=score=0;
		scanf("%s",a);
		for(i=0;i<strlen(a);i++)
		{
			if(a[i] == 'O')
			{
				score++;
				sum+=score;
			}
			else
			{
				score=0;
			}
		}
		printf("%d\n",sum);
	}
}
		
		