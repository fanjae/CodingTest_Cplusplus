#include <stdio.h>
int main()
{
	int a,b,c;
	int start[105]={0};
	int s,e;
	int max=0;
	int sol=0;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1; i<=3; i++)
	{
		scanf("%d %d",&s,&e);
		if(max < e)
		{
			max = e;
		}
		for(int i=s; i<e; i++)
		{
			start[i]++;
		}
	}
	for(int i=1; i<=max; i++)
	{
		if(start[i] == 1)
		{
			sol += start[i] * a;
		}
		else if(start[i] == 2)
		{
			sol += start[i] * b;
		}
		else if(start[i] == 3)
		{
			sol += start[i] * c;
		}
	}
	printf("%d\n",sol);
}