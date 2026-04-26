#include <iostream>
#include <string>

using namespace std;
int main(void)
{
	string data;
	int len;
	while(1)
	{
		getline(cin,data);
		if(data.compare("***") == 0)
		{
			break;
		}
		len = data.size();
		for(int i=len-1; i>=0; i--)
		{
			cout << data[i];
		}
		cout << "\n";
		
	}
}