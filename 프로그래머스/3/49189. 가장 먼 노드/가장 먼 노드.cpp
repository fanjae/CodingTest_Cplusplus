#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool visited[20005] = { false };
int cnt[20005] = { 0 };
int max_value = 0;

bool compare(vector<int>&a, vector<int>& b)
{
    return a[0] < b[0];
}
void dfs(int start, int &n, vector <vector<int>> &connect)
{
    for (auto it = connect[start].begin(); it != connect[start].end(); it++)
    {
        int target = *it;
        if (cnt[target] > cnt[start] + 1)
        {
            if (cnt[target] > cnt[start] + 1)
            {
                cnt[target] = cnt[start] + 1;
                dfs(target, n, connect);
            } 
        }
    }
}
int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector <vector<int>> connect (n+1);
    sort(edge.begin(), edge.end(), compare);

    fill(cnt, cnt + 20005, 20005);
    cnt[1] = 0;
    for (int i = 0; i < edge.size(); i++)
    {
        connect[edge[i][0]].push_back(edge[i][1]);
        connect[edge[i][1]].push_back(edge[i][0]);
    }
    dfs(1,n,connect);
    
    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] > max_value)
        {
            max_value = cnt[i];
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (cnt[i] == max_value)
        {
            answer++;
        }
    }
    return answer;
}