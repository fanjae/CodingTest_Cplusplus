#include <iostream>
#include <cstring>
#include <string>
#include <queue>

using namespace std;
string first;
string second;
string answer;

int first_length;
int second_length;
int answer_length = 0;
bool visited[205][205]={0};
bool find_answer = false;

struct data
{
	string str_data;
	int index;
	int index2;
};

void bfs()
{
	queue <data> que;
	que.push({"",0,0});
	
	while(!que.empty())
	{
		int x = que.front().index;
		int y = que.front().index2;
		int sum = x + y;
		string temp_str = que.front().str_data;
		que.pop();
		
		if(sum == answer_length && temp_str == answer)
		{
			find_answer = true;
			return ;	
		}
		else if(sum > answer_length)
		{
			return ;
		}
		
		if(x < first_length && answer[sum] == first[x] && visited[x+1][y] == false)
		{
			visited[x+1][y] = true;
			que.push({temp_str + first[x],x+1,y});
		}
		if(y < second_length && answer[sum] == second[y] && visited[x][y+1] == false)
		{
			visited[x][y+1] = true;
			que.push({temp_str + second[y],x,y+1});
		}
	}
	return ;
}
int main(void)
{
	int T;
	int i=1;
	// C++ 입출력 속도 높이기 

	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 

	cin >> T;
	while(i <= T)
	{
		cin >> first >> second >> answer;
		first_length = first.length();
		second_length = second.length();
		answer_length = answer.length();
		
		bfs();
		if(find_answer == true)
		{
			cout << "Data set " << i++ << ": yes" << "\n";
		}
		else
		{
			cout << "Data set " << i++ << ": no" << "\n";
		}
		memset(visited,false,sizeof(visited));
		find_answer = false;
	}
	
}