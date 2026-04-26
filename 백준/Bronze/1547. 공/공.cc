#include <stdio.h>
struct information
{
	int index;
	bool ball;
};
int main()
{
	struct information set[3]={1,true,2,false,3,false};
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int one,two;
		scanf("%d %d",&one,&two);
		struct information temp;
		temp = set[one-1];
		set[one-1] = set[two-1];
		set[two-1] = temp;
	}
	for(int i=0; i<3; i++)
	{
		if(set[i].ball)
		{
			printf("%d ",i+1);
		}
	}
}