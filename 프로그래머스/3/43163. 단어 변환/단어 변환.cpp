#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;
queue<pair<string, int>> que;
bool visited[55] = { 0 };
int bfs(string begin, string target, vector<string> &words)
{
    int word_len = begin.length();
    que.push({begin,0 });
    while (!que.empty())
    {
        string front_string = que.front().first;
        int answer = que.front().second;
        
        if (front_string == target)
        {
            return answer;
        }

        que.pop();
        for (int i = 0; i < words.size(); i++)
        {
            if (visited[i] == true) continue;
            else
            {
                int cnt = 0;
                for (int j = 0; j < word_len; j++)
                {
                    if (front_string[j] != words[i][j])
                    {
                        cnt++;
                    }
                }
                if (cnt == 1)
                {
                    visited[i] = true;
                    que.push({ words[i],answer + 1 });
                }
            }
        }
    }
}
int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    bool impossible = true;

    for (int i = 0; i < words.size(); i++)
    {
        if (target == words[i]) // 하나라도 같은 단어 있으면 만들 수 있음.
        {
            impossible = false;
        }
    }

    if (impossible == false)
    {
        answer = bfs(begin, target, words);
    }
    return answer;
}