#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
typedef struct data
{
	int value;
	int rank_value;
}data;
bool compare(struct data &dat, struct data &dat2)
{
	if(dat.rank_value < dat2.rank_value)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main(void)
{
	int n;
	int sum = 0;
	data value[26];
	string str[10];
	scanf("%d",&n);
	
	for(int i=0; i<n; i++)
	{
		cin >> str[i];
	}
	
	for(int i=0; i<26; i++)
	{
		value[i].value = 0;
		value[i].rank_value = 1;
	}
	
	for(int i=0; i<n; i++)
	{
		int len = str[i].size();
		int temp = 0;
		int count = 1;
		
		for(int j=len-1; j>=0; j--)
		{
			temp += count;
			count *= 10;
			value[str[i][j]-'A'].value += temp;
			temp = 0;
		}
	}
	
	for(int i=0; i<26; i++)
	{
		for(int j=0; j<26; j++)
		{
			if(i == j)
			{
				continue;
			}
			if(value[i].value > value[j].value)
			{
				value[j].rank_value++;
			}

		}
	}
	for(int i=0; i<26; i++)
	{
		for(int j=0; j<26; j++)
		{
			if(value[i].value == value[j].value && i < j)
			{
				value[j].rank_value = value[i].rank_value + 1;
			}
		}
	}	
	for(int i=0; i<n; i++)
	{
		int temp = 0;
		int len = str[i].size();
		int count = 1;
		
		for(int j=len-1; j>=0; j--)
		{
			temp += (9 - (value[str[i][j]-'A'].rank_value-1)) * count;
			count *= 10;
		}
		sum += temp;
	}
	printf("%d\n",sum);


}