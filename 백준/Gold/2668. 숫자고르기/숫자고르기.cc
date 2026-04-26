#include <stdio.h>
#include <stdbool.h>
#include <algorithm>
#include <vector>

using namespace std;
vector <int> get_data;
int data[105];
bool visited[105];
bool maked[105];

void dfs(int i)
{
	visited[i] = true;
	int target = data[i];
	
	if(visited[target] == false)
	{
		dfs(target);
	}
	else
	{
		if(maked[target] == false)
		{
			get_data.push_back(i);
			for(int j=target; j!=i; j=data[j])
			{
				get_data.push_back(j);
			}
		}
	}
	maked[i] = true;
}
int main(void)
{
	int n;
	int data_len;
	scanf("%d",&n);
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&data[i]);
	}
	
	for(int i=1; i<=n; i++)
	{
		if(visited[i] == false)
		{
			dfs(i);			
		}
	}
	
	data_len = get_data.size();
	printf("%d\n",data_len);
	sort(get_data.begin(),get_data.end());
	for(int i=0; i<get_data.size(); i++)
	{
		printf("%d\n",get_data[i]);
	}
}
	