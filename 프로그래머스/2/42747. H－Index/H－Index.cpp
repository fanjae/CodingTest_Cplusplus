#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int up = 0;
    int down = 0;
    int n = citations.size();

    for (int i = n; i >= 0; i--)
    {
        for (int j = n; j >= 1; j--)
        {
            if (citations[j-1] >= i)
            {
                up++;
            }
            else
            {
                down++;
            }
        }
        if (i <= up && n - i >= down)
        {
            answer = i;
            break;
        }
        up = 0;
        down = 0;
    }
    return answer;
}