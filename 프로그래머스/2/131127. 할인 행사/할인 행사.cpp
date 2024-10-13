#include <string>
#include <vector>
#include <map>
#include <iostream>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;

    map<string, int> data;
    for (int i = 0; i < number.size(); i++)
    {
        data[want[i]] = number[i];
    }
    
    for (int i = 0; i < discount.size()-9; i++)
    {
        map<string, int> compare;
        int cnt = 0;

        for (int j = i; j < i + 10; j++)
        {
            compare[discount[j]]++;
        }

        for (auto it = data.begin(); it != data.end(); it++)
        {
            if (data[it->first] == compare[it->first])
            {
                cnt++;
            }
        }
        if (cnt == data.size())
        {
            answer++;
        }
        cout << std::endl;
    }

    return answer;
}
