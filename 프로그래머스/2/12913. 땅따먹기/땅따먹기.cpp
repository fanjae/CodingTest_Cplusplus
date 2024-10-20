#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<vector<int> > land)
{
    int n = land.size();
    int answer = 0;
    int dp[100005][4] = { 0 };

    for (int i = 0; i < 4; i++)
    {
        dp[0][i] = land[0][i];
    }

    for (int i = 1; i < land.size(); i++)
    {
        dp[i][0] = max(max(dp[i - 1][1] + land[i][0], dp[i - 1][2] + land[i][0]), dp[i - 1][3] + land[i][0]);
        dp[i][1] = max(max(dp[i - 1][0] + land[i][1], dp[i - 1][2] + land[i][1]), dp[i - 1][3] + land[i][1]);
        dp[i][2] = max(max(dp[i - 1][0] + land[i][2], dp[i - 1][1] + land[i][2]), dp[i - 1][3] + land[i][2]);
        dp[i][3] = max(max(dp[i - 1][0] + land[i][3], dp[i - 1][1] + land[i][3]), dp[i - 1][2] + land[i][3]);
    }

    for (int i = 0; i < 4; i++)
    {
        answer = max(answer, dp[n-1][i]);
    }


    return answer;
}