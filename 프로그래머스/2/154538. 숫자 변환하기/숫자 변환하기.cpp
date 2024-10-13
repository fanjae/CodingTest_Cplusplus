#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <utility>
#include <map>
#include <iostream>
using namespace std;
map <int, bool> visited;
queue<pair<int, int>> que;
int solution(int x, int y, int n)
{
    int answer = 1000001;

    que.push({ x,0 });

    while (!que.empty())
    {
        int que_x = que.front().first;
        int cnt = que.front().second;
        que.pop();

        if (que_x == y)
        {
            answer = cnt;
            break;
        }
        if (que_x > y)
        {
            continue;
        }

        if (visited[que_x + n] == false)
        {
            visited[que_x + n] = true;
            que.push({ que_x + n, cnt + 1 });
        }
        if (visited[que_x * 2] == false)
        {
            visited[que_x * 2] = true;
            que.push({ que_x * 2, cnt + 1 });
        }
        if (visited[que_x * 3] == false)
        {
            visited[que_x * 3] = true;
            que.push({ que_x * 3, cnt + 1 });
        }
    }
    if (answer == 1000001)
    {
        answer = -1;
    }

    return answer;
}