#include <string>
#include <vector>
#include <queue>
using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> que;

    for (int i = 0; i < progresses.size(); i++)
    {
        que.push(i);
    }

    for (int i = 1; i <= 100; i++)
    {
        if (que.empty())
        {
            break;
        }
        int cnt = 0;
        for (int j = 0; j < progresses.size(); j++)
        {
            progresses[j] += speeds[j];
        }
        
        while (!que.empty() && progresses[que.front()] >= 100)
        {
            cnt++;
            que.pop();
        }
        if (cnt != 0)
        {
            answer.push_back(cnt);
            cnt = 0;
        }
    }

    
    return answer;
}