#include <iostream>
#include <string>
using namespace std;

string data[25];
int r,c;
int max_count = 0;
int dx[4]={1,-1,0,0};
int dy[4]={0,0,1,-1};
bool visited[26];

bool safe(int x, int y)
{
	if(x < 0 || x >= r)
	{
		return false;
	}
	if(y < 0 || y >= c)
	{
		return false;
	}
	return true;
}
void dfs(int x, int y,char visit_alphabet,int count)
{
	if(visited[visit_alphabet-'A'] == false)
	{
		if(max_count < count)
		{
			max_count = count;
		}
		visited[visit_alphabet-'A'] = true;
	}
	else
	{
		return ;
	}
	
	for(int i=0; i<4; i++)
	{
		int new_x = x + dx[i];
		int new_y = y + dy[i];
		
		if(safe(new_x,new_y) == true)
		{
			dfs(new_x,new_y,data[new_x][new_y],count+1);
		}
	}
	visited[visit_alphabet-'A'] = false;
	return ;
}
int main(void)
{
	scanf("%d %d",&r,&c);
	for(int i=0; i<r; i++)
	{
		cin >> data[i];
	}
	dfs(0,0,data[0][0],1);
	printf("%d\n",max_count);
}