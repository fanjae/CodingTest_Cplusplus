#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
int main(void)
{
	int n;
	int count = 0;
	scanf("%d",&n);
	
	while(n != 0)
	{
		if(n % 2 == 1)
		{
			count++;
		}
		n /= 2;
	}
	cout << count;
}