#include <stdio.h>
int main(void)
{
	int n,t,c,p;
	scanf("%d %d %d %d",&n,&t,&c,&p);
	
	int ans = 0;
	int day = 1;
	int go = 1;
	while(day <= n)
	{
		if(go == t+1)
		{
			go = 1;
		 	ans++;
		}	
		go++;
		day++;
	}
	printf("%d\n",(ans*c)*p);
}