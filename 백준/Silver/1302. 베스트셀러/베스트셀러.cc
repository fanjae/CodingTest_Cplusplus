#include <stdio.h>
#include <map>
#include <string>

using namespace std;
map<string, int> book_data;
int main(void)
{
	int ans = 1;
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char data[55];
		int count = 1;		
		scanf("%s",data);

		auto iter = book_data.find(data);
		
		if(iter == book_data.end())
		{
			book_data.insert({data,1});
			
		}
		else
		{
			int re_count = iter->second + 1;
			book_data.erase(data);
			book_data.insert({data,re_count});
			
			if(ans < re_count)
			{
				ans = re_count;
			}
		}
	}
	
	for(auto iter = book_data.begin(); iter != book_data.end(); iter++)
	{
		if(iter->second == ans)
		{
			printf("%s\n",iter->first.c_str());
			return 0;
		}
	}
}