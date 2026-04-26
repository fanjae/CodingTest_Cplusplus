#include <stdio.h>
#include <string.h>
int main(void)
{
	int stack[10005]={0};
   int top=0;
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int temp;
		char command[10];
		scanf("%s",&command);
		if(strcmp(command,"push") == 0)
		{
			scanf("%d",&temp);
			stack[top++]=temp;
		}
		else if(strcmp(command,"top") == 0)
		{
			if(top == 0)
			{
				printf("%d\n",-1);
			}
			else
			{
				printf("%d\n",stack[top-1]);
			}
		}
		else if(strcmp(command,"size") == 0)
		{
		    printf("%d\n",top);	
		}
		else if(strcmp(command,"empty") == 0)
		{
			if(top == 0)
			{
				printf("%d\n",1);
			}
			else
			{
				printf("%d\n",0);
			}
		}
		else if(strcmp(command,"pop") == 0)
		{
			if(top == 0)
			{
				printf("%d\n",-1);
			}
			else
			{
				printf("%d\n",stack[--top]);
			}
		}
	}
}