// A 65
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
	char data[105][15];
	int count[26]={0};
	int n;
	int ans=0;
	scanf("%d",&n);
	scanf("%s",data[0]);
	for(int i=0; i<strlen(data[0]); i++)
	{
		count[data[0][i] - 65]++;
	}
	for(int i=1; i<n; i++)
	{
		int count2[26]={0};
		int sum = 0;
		int same = 0;
		scanf("%s",data[i]);
		for(int j=0; j<strlen(data[i]); j++)
		{
			count2[data[i][j] - 65]++;
		}
		for(int j=0; j<26; j++)
		{
			sum += abs(count[j] - count2[j]);
		}
		if(sum == 0)
		{
			ans++;
		}
		if(sum == 1)
		{
			ans++;
			//printf("Right\n");
		}
		if(sum == 2)
		{
			for(int j=0; j<26; j++)
			{
				same += count[j] - count2[j];
			}
			//printf("same : %d\n",same);
			if(same == 0)
			{
				//printf("Right\n");
				ans++;
			}
		}
	}
	printf("%d\n",ans);
}
	