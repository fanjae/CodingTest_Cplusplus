#include <string>
#include <vector>
#include <iostream>

using namespace std;
int gcd(int a, int b)
{
    if (b == 0) return a;
    return gcd(b, a % b);
}
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}
int solution(vector<int> arr) {
    int answer = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        int GCD = gcd(answer, arr[i]);
        int LCM = answer * arr[i] / GCD;
        answer = LCM;
    }
    return answer;
}