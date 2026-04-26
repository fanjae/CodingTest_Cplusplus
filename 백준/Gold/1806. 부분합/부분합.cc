#include <stdio.h>
long long int data[100005];
int main(void)
{
	long long int N,S;
	long long int sum = 0;
	scanf("%lld %lld",&N,&S);
	
	for(int i=0; i<N; i++)
	{
		scanf("%lld",&data[i]);
	}
	int start = 0;
	int end = 0;
	int ans_len = 0;
	while(start <= end && end <= N-1)
	{
		if(sum + data[end] < S)
		{
			sum = sum + data[end];
			end++;
		}
		else if(sum + data[end] >= S)
		{
			if(ans_len == 0 || ans_len > end - start + 1)
			{
				ans_len = end - start + 1;
			}
			sum = sum - data[start];
			start++;
		}
	}
	printf("%d\n",ans_len);
}