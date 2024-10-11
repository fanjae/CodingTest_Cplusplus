#include<vector>
#include<queue>

using namespace std;
const int go_x[4] = { 1,-1,0,0 };
const int go_y[4] = { 0,0,1,-1 };
bool safe(const int& x, const int& y, const int& n, const int& m)
{
    if (x == -1 || y == -1 || x == n || y == m)
    {
        return false;
    }
    return true;
}
int bfs(vector<vector<int>>& maps)
{
    queue <pair<pair<int, int>,int>> q;
    bool visited[105][105] = { 0 };
    q.push(make_pair(make_pair(0, 0),1));

    int n = maps.size();
    int m = maps[0].size();
    while (!q.empty())
    {
        int x = q.front().first.first;
        int y = q.front().first.second;
        int cnt = q.front().second;

        if (x == n - 1 && y == m - 1)
        {
            return cnt;
        }
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int new_x = x + go_x[i];
            int new_y = y + go_y[i];
            if (safe(new_x, new_y, n, m) == true && visited[new_x][new_y] == false && maps[new_x][new_y] == 1)
            {
                visited[new_x][new_y] = true;
                q.push(make_pair(make_pair(new_x, new_y), cnt + 1));
            }
        }
    }
    return -1;
}
int solution(vector<vector<int> > maps)
{
    int answer = 0;
    answer = bfs(maps);
    return answer;
}