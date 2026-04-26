#include <stdio.h>
int main(void)
{
	int s1,s2,s3;
	int max = 0;
	int max_count = 0;
	int data[120]={0};
	scanf("%d %d %d",&s1,&s2,&s3);
	for(int i=1; i<=s1; i++)
	{
		for(int j=1; j<=s2; j++)
		{
			for(int k=1; k<=s3; k++)
			{
				int sum = i+j+k;
				data[sum]++;
			}
		}
	}
	for(int i=1; i<=s1+s2+s3; i++)
	{
		if(max < data[i])
		{
			max = data[i];
			max_count = i;
		}
	}
	printf("%d\n",max_count);
}