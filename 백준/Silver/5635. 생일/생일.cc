#include <stdio.h>
typedef struct data
{
	char name[30];
	int day;
	int month;
	int year;
}data;
int main(void)
{
	int n;
	data hu[105];
	data max;
	data min;
	scanf("%d",&n);
	scanf("%s %d %d %d",&hu[0].name,&hu[0].day,&hu[0].month,&hu[0].year);
	max = hu[0];
	min = hu[0];
	for(int i=1; i<n; i++)
	{
		scanf("%s %d %d %d",&hu[i].name,&hu[i].day,&hu[i].month,&hu[i].year);
		if(max.year > hu[i].year)
		{
			max = hu[i];
		}
		else if(max.year == hu[i].year)
		{
		   if(max.month > hu[i].month)
		   {
		   	max = hu[i];
		   }
		   else if(max.month == hu[i].month)
		   {
		   	if(max.day > hu[i].day)
		   	{
		   		max = hu[i];
		   	}
		   }
		}
	   if(min.year < hu[i].year)
		{
			min = hu[i];
		}
		else if(min.year == hu[i].year)
		{
		   if(min.month < hu[i].month)
		   {
		   	min = hu[i];
		   }
		   else if(min.month == hu[i].month)
		   {
		   	if(min.day < hu[i].day)
		   	{
		   		min = hu[i];
		   	}
		   }
		}
	}
	printf("%s\n%s",min.name,max.name);
}
	