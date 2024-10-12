#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b, a%b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    
    int gcd_value;
    if(denom1 <= denom2)
    {
        gcd_value = gcd(denom1,denom2);
    }
    else
    {
        gcd_value = gcd(denom1,denom2);
    }
    int mo_value = gcd_value * (denom1 / gcd_value) * (denom2 / gcd_value);
    int ja_value = numer1 * (mo_value / denom1) + numer2 * (mo_value / denom2);
    
    gcd_value = gcd(ja_value,mo_value);
    answer.push_back(ja_value / gcd_value);
    answer.push_back(mo_value / gcd_value);

    
    
    
    return answer;
}