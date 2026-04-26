#include <stdio.h>
int main(void)
{
	int e,s,m;
	int year = 1;
	int start_e=1,start_s=1,start_m=1;
	
	scanf("%d %d %d",&e,&s,&m);
	
	while(1)
	{
		if(start_e == e && start_s == s && start_m == m)
		{
			printf("%d\n",year);
			return 0;
		}
		start_e++; start_s++; start_m++;
		if(start_e == 16)
		{
			start_e = 1;
		}
		if(start_s == 29)
		{
			start_s = 1;
		}
		if(start_m == 20)
		{
			start_m = 1;
		}
		year++;
	}
}