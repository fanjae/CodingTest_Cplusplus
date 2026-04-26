#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string a,b,c,d;
	string new_a;
	string new_b;
	long long int final_a,final_b;
	cin >> a >> b >> c >> d;
	new_a += a;
	new_a += b;
	
	new_b += c;
	new_b += d;
	final_a = stoll(new_a);
	final_b = stoll(new_b);
	
	printf("%lld",final_a + final_b);
	
}	