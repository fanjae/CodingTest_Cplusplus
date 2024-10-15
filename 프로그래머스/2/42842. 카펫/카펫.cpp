#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;

    int value = brown + yellow;

    int width;
    int height;
    for (int i = 3; i <= value; i++)
    {
        width = i;
        height = value / i;
        if (value % i == 0 && width >= height && width >= 3 && height)
        {
            if ((width - 2) * (height - 2) == yellow)
            {
                break;
            }

        }
    }
    
    answer.push_back(width);
    answer.push_back(height);
    return answer;
}
