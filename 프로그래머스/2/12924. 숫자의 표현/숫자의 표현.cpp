#include <string>
#include <vector>
using namespace std;

int solution(int n) {
    int answer = 0;
    int left = 1;
    int target = left;


    int sum = 0;
    while (left <= n || target <=  n)
    {
        if (sum < n)
        {
            sum = sum + left;
            left++;
        }
        else if (sum >= n)
        {
            if (sum == n) { answer++; }
            sum -= target;
            target++;

        }
    }
    return answer;
}