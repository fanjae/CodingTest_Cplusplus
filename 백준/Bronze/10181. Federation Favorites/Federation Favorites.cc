#include <stdio.h>
int main()
{
	int n=1;
	while(n != -1)
	{
		int sum = 0;
		int max = 0;
		int index = 0;
		int mod[100005]={0};
		scanf("%d",&n);
		if(n == -1)
		{
			break;
		}
		for(int i=1; i<n; i++)
		{
			if(n % i == 0)
			{
				sum += i;
				mod[i]=1;
				max++;
			}
		}
		if(sum == n)
		{
			printf("%d = ",n);
			for(int i=1; i<n; i++)
			{
			    if(index < max - 1 && mod[i] == 1)
			    {
				    printf("%d + ",i);
				    index++;
			    }
			    else if(index == max - 1 && mod[i] == 1)
			    {
					printf("%d\n",i);
				}
			}
		}
		else
		{
			printf("%d is NOT perfect.\n",n);
		}
	}
}