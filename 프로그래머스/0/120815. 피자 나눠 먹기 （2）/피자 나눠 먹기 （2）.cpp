#include <iostream>
#include <numeric> 

int solution(int n) {
   
    int lcm = (n * 6) / std::gcd(n, 6);
    
    return lcm / 6;
}