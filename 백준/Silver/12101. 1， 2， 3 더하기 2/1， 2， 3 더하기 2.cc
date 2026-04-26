#include <stdio.h>
#include <stdlib.h>
int count = 0;
int n,k;
void dfs(int value, char *data,int len)
{
	if(n == value)
	{
		count++;
	}
	
	if(count == k)
	{
		data[len-1] = 0;
		printf("%s",data);
		exit(0);
	}
	
	if(value + 1 <= n)
	{
		data[len] = '1';
		data[len+1] = '+';
		dfs(value + 1,data,len+2);	
		data[len] = 0;	
	}
	if(value + 2 <= n)
	{
		data[len] = '2';
		data[len+1] = '+';
		dfs(value + 2,data,len+2);
		data[len] = 0;		
	}
	if(value + 3 <= n)
	{
		data[len] = '3';
		data[len+1] = '+';
		dfs(value + 3,data,len+2);
		data[len] = 0;		
	}
	return ;
}
int main(void)
{
	char data[105];
	scanf("%d %d",&n,&k);
	dfs(0,data,0);
	if(count <= k)
	{
		printf("-1\n");	
	}
}
