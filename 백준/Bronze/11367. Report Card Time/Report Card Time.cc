#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char name[15];
		int score;
		scanf("%s %d",name, &score);
		printf("%s ",name);
		if(score >= 97)
		{
			printf("A+\n");
		}
		else if(score >= 90)
		{
			printf("A\n");
		}
		else if(score >= 87)
		{
			printf("B+\n");
		}
		else if(score >= 80)
		{
			printf("B\n");
		}
		else if(score >= 77)
		{
			printf("C+\n");
		}
		else if(score >= 70)
		{
			printf("C\n");
		}
		else if(score >= 67)
		{
			printf("D+\n");
		}
		else if(score >= 60)
		{
			printf("D\n");
		}
		else
		{
			printf("F\n");
		}
	}
}