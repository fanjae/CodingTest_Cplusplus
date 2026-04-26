#include <stdio.h>
int main(void)
{
	int a_atk,a_life;
	int b_atk,b_life;
	
	scanf("%d %d",&a_atk,&a_life);
	scanf("%d %d",&b_atk,&b_life);
	while(1)
	{
		a_life -= b_atk;
		b_life -= a_atk;
		
		if(a_life <= 0 && b_life <= 0)
		{
			printf("DRAW\n");
			return 0;
		}
		else if(a_life >= 1 && b_life <= 0)
		{
			printf("PLAYER A\n");
			return 0;
		}
		else if(b_life >= 1 && a_life <= 0)
		{
			printf("PLAYER B\n");
			return 0;
		}		
		else
		{
			continue;
		}
	}
}