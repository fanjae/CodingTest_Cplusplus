#include <iostream>
#include <string.h>
#include <queue>
#include <map>

using namespace std;

struct my_pair
{
	string data;
	int count;
};

map <string, bool> visited[15];
string n;
int k;
int answer = -1;
void bfs()
{
	int n_value;
	int str_size;
	int now_swap_count = 0;
	string n_str;
	queue <my_pair> que;
	que.push({n,0});
	str_size = n.length();

	while(!que.empty() && now_swap_count < k)
	{
		n_value = stoi(que.front().data);
		n_str = que.front().data;
		now_swap_count = que.front().count;
		
		if(now_swap_count > k)
		{
			break;
		}
		que.pop();
		
		for(int i=0; i<str_size-1; i++)
		{
			int new_temp;
			for(int j=i+1; j<str_size; j++)
			{
				if(i == 0 && n_str[j] == '0')
				{
					continue;
				}
				else
				{
					if(now_swap_count < k)
					{
						swap(n_str[i],n_str[j]);
						new_temp = stoi(n_str);
						
						if(visited[now_swap_count+1].find(n_str) == visited[now_swap_count+1].end())
						{
							visited[now_swap_count+1][n_str] = true;
							que.push({n_str,now_swap_count+1});	
							
							
							if((now_swap_count+1) % 2 == (k % 2))
							{	
								if(new_temp > answer)
								{
									answer = new_temp;
								}
							}
						}
						swap(n_str[i],n_str[j]);
					}
				}
			}
		}	
	}
	
	if(answer == -1)
	{
		printf("-1\n");	
	}
	else
	{
		printf("%d\n",answer);
	}
}	
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> k;
	
	if(n.length() == 1 || (n.length() == 2 && n[1] == '0'))
	{
		printf("-1");
		return 0;
	}
	bfs();
}