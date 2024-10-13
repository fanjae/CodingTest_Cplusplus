#include <string>
#include <vector>

using namespace std;
#define MOD 1000000007
int solution(int n) {
    int dp[60005]={0,1,2};
    int answer = 0;
    for(int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1] % MOD + dp[i-2] % MOD; 
    }
    answer = dp[n] % MOD;
    return answer;
}