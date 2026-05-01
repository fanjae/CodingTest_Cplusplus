#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;

    int cnt[10] = { 0 };
    long long op = 1;
    string temp = to_string(n);

    for (int i = 0; i < temp.length(); i++)
    {
        cnt[temp[i] - '0']++;
    }

    for (int i = 0; i <= 9; i++)
    {
        for (int j = 1; j <= cnt[i]; j++)
        {
            answer = answer + (long long)(i * op);
            op *= 10;
        }
    }

    return answer;
}