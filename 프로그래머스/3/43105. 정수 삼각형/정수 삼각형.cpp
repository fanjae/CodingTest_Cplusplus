#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    int dp[505][505] = { 0 };
    dp[0][0] = triangle[0][0];

    for (int i = 1; i < triangle.size(); i++)
    {
        dp[i][0] = triangle[i][0] + dp[i-1][0];
    }

    for (int i = 1; i < triangle.size(); i++)
    {
        for (int j = 1; j <= i; j++)
        {
            dp[i][j] = max(dp[i - 1][j] + triangle[i][j], dp[i - 1][j - 1] + triangle[i][j]);
            answer = max(answer, dp[i][j]);
        }
    }

    return answer;
}