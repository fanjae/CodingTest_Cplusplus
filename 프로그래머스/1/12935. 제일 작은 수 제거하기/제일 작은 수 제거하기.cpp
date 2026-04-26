#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int n = arr.size();

    int min = arr[0];
    for(int i=0; i<n; i++)
    {
        if(min > arr[i]) min = arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(min == arr[i]) continue;
        else
        {
            answer.push_back(arr[i]);
        }
    }
    if(answer.size() == 0)
    {
        answer.push_back(-1);
    }
    return answer;
}