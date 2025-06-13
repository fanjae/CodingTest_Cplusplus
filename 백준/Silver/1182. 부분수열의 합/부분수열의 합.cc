#include <stdio.h>
#include <stdlib.h>
int n,s;
int data[105]={0};
int count = 0;
void back(int k, int sum)
{
	if(k == n)
	{
		if(sum == s)
		{
			count++;
		}
		return ;
	}
	back(k+1,sum+data[k]); // 현재 데이터 포함 
	back(k+1,sum); // 자신의 위치 데이터 미포함 
}
int main(void)
{
	scanf("%d %d",&n,&s);
	for(int i=0; i<n; i++)
	{
		scanf("%d",&data[i]);
	}
	back(0,0);
	if(s == 0)
	{
		count--;
	}
	printf("%d\n",count);
}