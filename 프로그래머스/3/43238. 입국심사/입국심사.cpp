#include <string>
#include <vector>

using namespace std;

bool possible(long long int mid, vector<int> &data, int n)
{
    long long time = 0;
    for(int i=0; i<data.size(); i++)
    {
        time += mid / data[i];
        if(time >= n) return true;
    }
    return time >= n;
    
}
long long solution(int n, vector<int> times) {
    long long answer = 0;
    
    long long int low = 1;
    long long int high = 100000000000000000;
    
    while(low < high)
    {
        long long int mid = (low + high) / 2;
        if(possible(mid,times,n))
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    answer = low;
    return answer;
}