#include <string>
#include <vector>
#include <iostream>

using namespace std;
bool visited[205];
void dfs(int target, vector<vector<int>>& computers)
{
    for (int i = 0; i < computers[target].size(); i++)
    {
        if (visited[i] == false && computers[target][i] == true)
        {
            visited[i] = true;
            dfs(i, computers);
        }
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;

    for (int i = 0; i < computers.size(); i++)
    {
        for (int j = 0; j < computers[i].size(); j++)
        {
            if (visited[j] == false && computers[i][j] == true)
            {
                visited[j] = true;
                answer++;
                dfs(j,computers);
            }
        }
    }
    return answer;
}