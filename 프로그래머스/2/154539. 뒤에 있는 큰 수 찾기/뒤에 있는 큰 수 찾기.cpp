#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;
int answer_value[1000005];
stack <pair<int,int>> stk;
vector<int> solution(vector<int> numbers) 
{
    vector<int> answer;
    
    for(int i=0; i<numbers.size(); i++)
    {
        while(!stk.empty() && stk.top().first < numbers[i]) // 나보다 큰 수가 있다면 뒷큰수
        {
            answer_value[stk.top().second] = numbers[i];
            stk.pop();
        }
        stk.push({numbers[i],i});
    }
    while(!stk.empty())
    {
        answer_value[stk.top().second] = -1;
        stk.pop();
    }
    
    for(int i=0; i<numbers.size(); i++)
    {
        answer.push_back(answer_value[i]);
    }
    
    
	
    return answer;
}