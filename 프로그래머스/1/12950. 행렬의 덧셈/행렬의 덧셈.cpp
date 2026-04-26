#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) 
{
    int x = arr1.size();
    int y = arr1[0].size();
    
    vector<vector<int>> answer(x, vector<int>(y));
    
    
    for(int i=0; i<x; i++)
    {
        for(int j=0; j<y; j++)
        {
            answer[i][j] = arr1[i][j] + arr2[i][j];        
        }
    }
    return answer;
}