#include <stdio.h>
struct data
{
	long long int value;
	char name[105];
};
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
	   int n;
	   struct data stu[105];
	   struct data temp;
	   scanf("%d",&n);
	   for(int i=0; i<n; i++)
	   {
	   	scanf("%d %s",&stu[i].value,stu[i].name);
	   }
	   temp = stu[0];
	   for(int i=0; i<n; i++)
	   {
	   	if(temp.value < stu[i].value)
	   	{
	   		temp = stu[i];
	   	}
	   }
	   printf("%s\n",temp.name);
	}
}