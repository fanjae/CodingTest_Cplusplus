#include <stdio.h>
#include <stdbool.h>
#include <algorithm>

using namespace std;
typedef struct data
{
	int start;
	int end;
}data;

bool compare(struct data &dat, struct data &dat2)
{
	return dat.start < dat2.start;
}
int main(void)
{
	int n;
	int max = 0;
	data dat[105];
	int dp[105]={0};
	
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d",&dat[i].start,&dat[i].end);
		dp[i] = 1;
	}
	
	sort(dat,dat+n,compare);
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<i; j++)
		{
			if(dat[i].end > dat[j].end && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	
	for(int i=0; i<n; i++)
	{
		if(max < dp[i])
		{
			max = dp[i];
		}
	}
	printf("%d\n",n-max);
}