#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        gcd(b, a %b);
    }
}
int solution(vector<int> arr) {
    int answer = 0;
    
    int gcd_value;
    for(int i=1; i<arr.size(); i++)
    {
        gcd_value = gcd(arr[0],arr[i]);
    }
    answer = gcd_value;
    return answer;
}