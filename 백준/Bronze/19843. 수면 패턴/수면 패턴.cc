#include <stdio.h>
#include <string.h>
int main(void)
{
	int t,n;
	int sum = 0;
	char first[10],second[10];
	int f_t,s_t;
	scanf("%d %d",&t,&n);
	for(int i=0; i<n; i++)
	{
		int value = 0;
		int a = 0;
		int b = 0;
		scanf("%s %d %s %d",first,&f_t,second,&s_t);
		if(strcmp(first,"Mon")==0)
		{
			a = 0;
		}
		else if(strcmp(first,"Tue")==0)
		{
			a = 1;
		}
		else if(strcmp(first,"Wed")==0)
		{
			a = 2;
		}
		else if(strcmp(first,"Thu")==0)
		{
			a = 3;
		}
		else if(strcmp(first,"Fri")==0)
		{
			a = 4;
		}
		a = (a * 24) + f_t;
		
		if(strcmp(second,"Mon")==0)
		{
			b = 0;
		}
		else if(strcmp(second,"Tue")==0)
		{
			b = 1;
		}
		else if(strcmp(second,"Wed")==0)
		{
			b = 2;
		}
		else if(strcmp(second,"Thu")==0)
		{
			b = 3;
		}
		else if(strcmp(second,"Fri")==0)
		{
			b = 4;
		}
		b = (b * 24) + s_t;
		sum += b - a;
	}
	if(t-sum > 48)
	{
	 	printf("%d",-1);	
	}
	else if(t-sum >= 0)
	{
		printf("%d",t-sum);
	}
	else if(t-sum < 0)
	{
		printf("0");
	}
}
	
	