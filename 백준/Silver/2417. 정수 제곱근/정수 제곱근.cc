#include <iostream>
#include <climits>
using namespace std;

int main() {
    
    unsigned long long int n;
    cin >> n;

    unsigned long long left, right;

    left = 0;
    right = UINT_MAX;

    while (left < right)
    {
        unsigned long long int mid = (left + right) / 2; 
        if (mid * mid >= n)
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    cout << left;
}