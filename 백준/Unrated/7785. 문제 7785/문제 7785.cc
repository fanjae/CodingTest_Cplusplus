#include <stdio.h>
#include <algorithm>
#include <map>
#include <string>
using namespace std;

map<string,bool> map_data;

int main(void)
{
	char member[10];
	char in[10];
	
	int n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s %s",member,in);
		if(in[0] == 'e' && in[1] == 'n' && in[2] == 't' && in[3] == 'e' && in[4] == 'r')
		{
			map_data.insert({member,true});
		}
		else if(in[0] == 'l' && in[1] == 'e' && in[2] == 'a' && in[3] == 'v' && in[4] == 'e')
		{
			map_data.erase(member);
		}
	}
	
	for(auto iter = map_data.rbegin(); iter != map_data.rend(); iter++)
	{
		printf("%s\n",iter->first.c_str());
	}
}