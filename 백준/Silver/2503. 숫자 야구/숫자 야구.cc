#include <stdio.h>
#include <stdlib.h>
#include <cstring>
int main(void)
{
	int n;
	int count=0;
	int data[1000]={0};
	memset(data,1,sizeof(data));
	for(int i=100; i<=999; i++)
	{
		char dat[5];
		sprintf(dat,"%d",i);
		if(dat[0] == dat[1] || dat[1] == dat[2] || dat[0] == dat[2])
		{
			data[i] = 0;
		}
		else if(dat[0] == '0' || dat[1] == '0' || dat[2] == '0')
		{
			data[i] = 0;
		}
	}
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		int num,strike,ball;
		int first,second,third;
		scanf("%d %d %d",&num,&strike,&ball);
		first = num / 100;
		second = (num % 100) / 10;
		third = (num % 100) % 10;
		
		if(strike == 3)
		{
			printf("1\n");
			return 0;
		}
		for(int i=100; i<=999; i++)
		{
			if(data[i])
			{
				int i_strike,i_ball;
				int i_first,i_second,i_third;
			
				i_strike = 0;
				i_ball = 0;
				i_first = i / 100;
				i_second = (i % 100) / 10;
				i_third = (i % 100) % 10;
			
				if(first == i_first)
				{
					i_strike++;
				}
				if(second == i_second)
				{
					i_strike++;
				}
				if(third == i_third)
				{
					i_strike++;
				}
				
				if(first != i_first && (first == i_second || first == i_third))
				{
					i_ball++;
				}
				if(second != i_second && (second == i_first || second == i_third))
				{
					i_ball++;
				}
				if(third != i_third && (third == i_first || third == i_second))
				{
					i_ball++;
				}
				
				if(strike != i_strike || ball != i_ball)
				{
					data[i] = 0;
				}
			}	
		}
	}
	
	for(int i=100; i<=999; i++)
	{
		if(data[i])
		{
			count++;
		}
	}
	printf("%d",count);
}