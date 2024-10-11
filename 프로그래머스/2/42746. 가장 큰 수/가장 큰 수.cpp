#include <string>
#include <algorithm>
#include <vector>

using namespace std;
bool compare(string& a, string& b)
{
    return a + b > b + a;
}
string solution(vector<int> numbers) 
{
    string answer = "";

    vector<string> str_number;
    for (int i = 0; i < numbers.size(); i++)
    {
        str_number.push_back(to_string(numbers[i]));
    }

    sort(str_number.begin(), str_number.end(), compare);
    
    for(int i=0; i<str_number.size(); i++)
    {
        answer += str_number[i];
    }
    if(answer[0] == '0')
    {
        answer = "";
        answer += "0";
    }
    return answer;
}