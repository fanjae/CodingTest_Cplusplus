#include <stdio.h>
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
	{
		int num;
		int flag = 1;
		scanf("%d",&num);
		for(int i=2; i<=64; i++)
		{
			flag = 1;
			int count=0;
			int tmp = num;
			int temp[105];
			while(tmp != 0)
			{
				temp[count++] = tmp % i;
				tmp /= i;
			}
			for(int i=0; i<count/2; i++)
			{
				if(temp[i] != temp[count - i - 1])
				{
					flag = 0;
					break;
				}
			}
			if(flag == 1)
			{
				printf("1\n");
				break;
			}
			else flag = 0;
		}
		if(flag == 0)
		{
			printf("0\n");
		}
	}
}
