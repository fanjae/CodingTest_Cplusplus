#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

map <string, bool> heard;
map <string, bool> look;

int main(void)
{
	int n, m;
	int ans_count = 0;
	scanf("%d %d", &n, &m);

	char data[305];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", data);
		heard.insert({ data, true });
	}
	for (int i = 0; i < m; i++)
	{
		scanf("%s", data);
		look.insert({ data, true });
	}

	if (heard.size() <= look.size())
	{
		for (auto iter = heard.begin(); iter != heard.end(); iter++)
		{
			if (look.find(iter->first) != look.end())
			{
				ans_count++;
			}
		}
	}
	else if (heard.size() > look.size())
	{
		for (auto iter = look.begin(); iter != look.end(); iter++)
		{
			if (heard.find(iter->first) != heard.end())
			{
				ans_count++;
			}
		}
	}
	printf("%d\n", ans_count);
	if (heard.size() <= look.size())
	{
		for (auto iter = heard.begin(); iter != heard.end(); iter++)
		{
			if (look.find(iter->first) != look.end())
			{
				printf("%s\n", iter->first.c_str());
			}
		}
	}
	else if (heard.size() > look.size())
	{
		for (auto iter = look.begin(); iter != look.end(); iter++)
		{
			if (heard.find(iter->first) != heard.end())
			{
				printf("%s\n", iter->first.c_str());
			}
		}
	}
}