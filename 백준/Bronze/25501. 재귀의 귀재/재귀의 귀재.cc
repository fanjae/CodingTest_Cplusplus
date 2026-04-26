#include <iostream>
#include <cstring>
using namespace std;
int call_recursion = 0;
char value[1001];
int recursion(const char* s, int l, int r) 
{
	call_recursion++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char *s) 
{

	return recursion(s, 0, strlen(s) - 1);
}

int main() {
	int n;
	cin >> n;
	while (n--)
	{
		cin >> value;

		cout << isPalindrome(value) << " ";
		cout << call_recursion << "\n";

		call_recursion = 0;
	}
}