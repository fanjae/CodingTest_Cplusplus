#include <stdio.h>
int main(void)
{
	bool first = true;
	bool vaild = true;
	int n;
	int last;
	while(scanf("%d",&n) != EOF)
	{
		if(first == true)
		{
			last = n;
			first = false;
			continue;	
		}
		else
		{
			if(last > n)
			{
				printf("Bad\n");
				return 0;
			}
		}
		last = n;
	}
	if(vaild)
	{
		printf("Good\n");
	}
}