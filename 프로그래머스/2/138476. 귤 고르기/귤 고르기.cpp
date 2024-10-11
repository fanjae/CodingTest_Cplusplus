#include <string>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;
vector <int> cnt(10000005);
bool compare(int a, int b)
{
    return a > b;
}
int solution(int k, vector<int> tangerine) {
    int answer = 0;
    int sum = 0;
    int target = 0;
    
    for (int i = 0; i < tangerine.size(); i++)
    {
        cnt[tangerine[i]]++;
    }
    sort(cnt.begin(), cnt.end(), compare);

    bool first = true;
    while (sum < k)
    {
        if (cnt[target] != 0)
        {
            if (first == true)
            {
                answer++;
                first = false;
            }
            cnt[target]--;
            sum++;
        }
        if (cnt[target] == 0)
        {
            target++;
            first = true;
        }
    }

    return answer;
}