#include<stdio.h>
char str[5][20];
void input(void)
{
	int i;
	for(i=0;i<5;i++)
	{
		scanf("%s",str[i]);
	}
}
void output(void)
{
	int i,j;
	for(j=0;j<15;j++)
	{
		for(i=0;i<5;i++)
		{
			if(str[i][j]!=NULL)
			{
				printf("%c",str[i][j]);
			}
		}
	}
}
int main(void)
{
	input();
	output();
	return 0;
}