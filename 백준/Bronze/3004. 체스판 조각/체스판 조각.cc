#include <iostream>
using namespace std;
int main(void)
{
    int n;
    int row,col,value;
    cin >> n;
    
    row = n / 2 + 1;
    col = n - row + 2;
    value = row * col;
    
    cout << value;
}