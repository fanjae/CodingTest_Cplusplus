#include <string>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    int elements_size = elements.size();
    vector <int> value;
    for (int i = 0; i < elements_size; i++)
    {
        int sum = 0;
        for (int j = 0; j < elements_size; j++)
        {
            sum += elements[(i + j) % elements_size];
            value.push_back(sum);
        }
    }
    sort(value.begin(), value.end());
    value.erase(unique(value.begin(), value.end()), value.end());

    answer = value.size();
    return answer;
}