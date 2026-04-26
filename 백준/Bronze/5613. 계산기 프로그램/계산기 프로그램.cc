#include <stdio.h>
int main(void)
{
	int sum=0;
	int a;
	char op;
	
	scanf("%d",&a);
	sum += a;
	while(op != '=')
	{
		scanf("%c",&op);
		switch(op)
		{
			case '+':
				scanf("%d",&a);
				sum += a;
				break;
			case '-':
				scanf("%d",&a);
				sum -= a;
				break;
			case '*':
				scanf("%d",&a);
				sum *= a;
				break;
			case '/':
				scanf("%d",&a);
				sum /= a;
				break;
		}
	}
	printf("%d",sum);
}
		
		
	