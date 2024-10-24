#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> A, vector<int> B) {
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    int answer = 0;

    int a_index = 0;
    int b_index = 0;
    while (1)
    {
        if (b_index == B.size())
        {
            break;
        }
        if (A[a_index] < B[b_index])
        {
            a_index++;
            b_index++;
            answer++;
        }
        else if(A[a_index] >= B[b_index])
        {
            b_index++;
        }
    }

    return answer;
}