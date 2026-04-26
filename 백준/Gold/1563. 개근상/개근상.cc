#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>

#define MOD 1000000 
using namespace std;
int data[1005][4][4];
int n;
int dp(int index, int tardy, int absent, bool con)
{
	if(tardy >= 2 || absent >= 3) // 길이에 도달하기 전에 해당 조건을 만족 못한 경우 
	{
		return 0;
	}
	
	if(index == n)
	{
		if(tardy >= 2)
		{
			return 0;	
		}
		if(absent >= 3)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	int &ret = data[index][tardy][absent];
	if(ret != -1)
	{
		return ret;
	}
	
	ret = 0;
	if(con == false)
	{
		ret += dp(index+1, tardy, 0, false) % 1000000;
		ret += dp(index+1, tardy+1, 0, false) % 1000000;
		ret += dp(index+1, tardy, 1, true) % 1000000;
	}
	else
	{
		ret += dp(index+1, tardy, 0, false) % 1000000;
		ret += dp(index+1, tardy+1, 0, false) % 1000000;
		ret += dp(index+1, tardy, absent+1, true) % 1000000;
	}
	
	return ret % 1000000;
	
		
}
int main(void)
{
	scanf("%d",&n);
	memset(data,-1,sizeof(data));
	printf("%d\n",dp(0,0,0,false));
	
}