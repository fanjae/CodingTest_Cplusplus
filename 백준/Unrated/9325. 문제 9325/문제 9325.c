#include <stdio.h>
int main(void)
{
	int T,you;
	int op;
	int a,b;
	int i;
	int sum;
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		scanf("%d",&you);
		sum += you;
		scanf("%d",&op);
		for(i=0;i<op;i++)
		{
			scanf("%d %d",&a,&b);
			sum += a * b;
		}
		printf("%d\n",sum);
	}
}