#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    int target = 0;
    queue<pair<int, int>> que;
    vector<int> sample;
    for (int i = 0; i < priorities.size(); i++)
    {
        que.push({ priorities[i],i });
        sample.push_back(priorities[i]);
    }

    while (!que.empty())
    {
        bool execute = true;
        int value = que.front().first;
        int position = que.front().second;

        
        for (int i = 1; i < que.size(); i++)
        {

            if (value < sample[i % que.size()])
            {
                que.pop();
                que.push({ value,position });
                sample.erase(sample.begin());
                sample.push_back(value);
                execute = false;
                break;
            }
        }
        if (execute == true)
        {
            sample.erase(sample.begin());
            que.pop();
            answer++;

            if (position == location)
            {
                break;
            }
        }
    }

    return answer;
}