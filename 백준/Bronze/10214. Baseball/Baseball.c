#include <stdio.h>
int main(void)
{
	int T;
	int Yon,Kor;
	int i;
	int sum,sum2;
	scanf("%d",&T);
	while(T--)
	{
		sum=0;
		sum2=0;
		for(i=0;i<9;i++)
		{
		    scanf("%d %d",&Yon,&Kor);
			 sum+=Yon;
			 sum2+=Kor;
		}
		if(sum > sum2)
		{
			printf("Yonsei\n");
		}
		else if(sum == sum2)
		{
			printf("Draw\n");
		}
		else
		{
			printf("Korea\n");
		}
	}
}