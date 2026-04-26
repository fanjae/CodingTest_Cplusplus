#include <cstdio>
#include <iostream>
#include <map>
#include <string>
using namespace std;

map <string, int> str_data; 
string int_data[100005];
int main(void)
{
	int n,m;
	scanf("%d %d",&n,&m);
	
	for(int i=0; i<n; i++)
	{
		char tmp[1005];
		scanf("%s",tmp);
		int_data[i+1] = tmp;
		str_data[tmp] = i+1;
	}
	for(int i=1; i<=m; i++)
	{
		char tmp[1005];
		scanf("%s",tmp);
		string search = tmp;
		
		if(search[0] >= '0' && search[0] <= '9')
		{
			cout << int_data[stoi(search)] << "\n";
		}
		else
		{
			cout << str_data[search] << "\n";
		}
	}
}