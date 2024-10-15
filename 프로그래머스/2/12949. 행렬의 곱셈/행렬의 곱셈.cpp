#include <string>
#include <vector>
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    int new_n = arr1.size();
    int mid = arr1[0].size();
    int new_m = arr2[0].size();
    vector<vector<int>> answer(new_n);


    for (int i = 0; i < new_n; i++)
    {
        for (int k = 0; k < new_m; k++)
        {
            int sum = 0;
            for (int j = 0; j < mid; j++)
            {
                sum += arr1[i][j] * arr2[j][k];
            }
            answer[i].push_back(sum);
        }
    }

    return answer;
}