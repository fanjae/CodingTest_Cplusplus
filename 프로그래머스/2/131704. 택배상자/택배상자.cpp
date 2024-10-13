#include <string>
#include <vector>
#include <stack>
using namespace std;
int solution(vector<int> order) {
    int answer = 0;
    int target = 0;
    int i = 0;
    stack <int> belt;
    
    while (target < order.size())
    {
        if (order[target] == i)
        {
          //  cout << "main : " << order[target] << std::endl;
            i++;
            target++;
            answer++;
        }
        else if (!belt.empty() && belt.top() == order[target])
        {
           // cout << "belt : " << order[target] << std::endl;
            belt.pop();
            target++;
            answer++;
        }
        else if (order[target] > i)
        {
           // cout << "insert : " << i << std::endl;
            belt.push(i);
            i++;
        }
        else
        {
            break;
        }
    }
    return answer;


    return answer;
}
