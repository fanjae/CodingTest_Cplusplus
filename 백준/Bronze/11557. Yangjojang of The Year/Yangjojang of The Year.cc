#include <stdio.h>
#include <string.h>
struct data
{
	char name[105];
	int drunk;
};
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		struct data value;
		struct data max;
		value.drunk = 0;
		max.drunk = 0;
		int n;
		scanf("%d",&n);
		for(int i=0; i<n; i++)
		{
			scanf("%s %d",value.name,&value.drunk);
			if(max.drunk < value.drunk)
			{
				max.drunk = value.drunk;
				strcpy(max.name,value.name);
			}
		}
		printf("%s\n",max.name);
	}
}